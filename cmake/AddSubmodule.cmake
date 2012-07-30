include(CMakeParseArguments)

find_package(Git)

function(add_submodule SUBMODULE_NAME SUBMODULE_FOLDER)

  if(GIT_FOUND)
    set(GTULU_PROGRAM_ARGS_FLAGS )
    set(GTULU_PROGRAM_ARGS_ONE_VALUE   )
    set(GTULU_PROGRAM_ARGS_MULTI_VALUE INCLUDE_DIRS)
    cmake_parse_arguments(SUBMODULE "${GTULU_PROGRAM_ARGS_FLAGS}" "${GTULU_PROGRAM_ARGS_ONE_VALUE}" "${GTULU_PROGRAM_ARGS_MULTI_VALUE}" ${ARGN} )

    if(NOT IS_ABSOLUTE ${SUBMODULE_FOLDER})
      set(SUBMODULE_FOLDER_FULL ${CMAKE_CURRENT_SOURCE_DIR}/${SUBMODULE_FOLDER})
    else()
      set(SUBMODULE_FOLDER_FULL ${SUBMODULE_FOLDER})
    endif()

    if(NOT DEFINED ${SUBMODULE_NAME}_SOURCE_DIR OR "${SUBMODULE_FOLDER_FULL}" STREQUAL "${${SUBMODULE_NAME}_SOURCE_DIR}")
      message(STATUS "using ${SUBMODULE_NAME} submodule in ${SUBMODULE_FOLDER}...")
      execute_process(COMMAND git submodule update --init ${SUBMODULE_FOLDER} WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} OUTPUT_QUIET)

      if(EXISTS ${SUBMODULE_FOLDER_FULL}/CMakeLists.txt)
        add_subdirectory(${SUBMODULE_FOLDER})
      endif()

      if(NOT DEFINED ${SUBMODULE_NAME}_SOURCE_DIR)
        set(${SUBMODULE_NAME}_SOURCE_DIR ${SUBMODULE_FOLDER_FULL})
        set(${SUBMODULE_NAME}_SOURCE_DIR ${SUBMODULE_FOLDER_FULL} PARENT_SCOPE)
      endif()

      foreach(SUBMODULE_INCLUDE_DIR ${SUBMODULE_INCLUDE_DIRS})
        if(NOT IS_ABSOLUTE ${SUBMODULE_INCLUDE_DIR})
          set(SUBMODULE_INCLUDE_DIR ${${SUBMODULE_NAME}_SOURCE_DIR}/${SUBMODULE_INCLUDE_DIR})
        endif()

        include_directories(${SUBMODULE_INCLUDE_DIR})
      endforeach()
    else()
      message(STATUS "submodule ${SUBMODULE_NAME} already in ${${SUBMODULE_NAME}_SOURCE_DIR}")
    endif()
  else()
    message(WARNING "Git not found, ignoring submodule ${SUBMODULE_NAME}")
  endif()

endfunction(add_submodule)
