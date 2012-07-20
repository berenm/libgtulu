include(CMakeParseArguments)

function(parse_version PROJECT_NAME)

  set(PARSE_VERSION_ARGS_FLAGS       DEBIAN VERSION_FILE)
  set(PARSE_VERSION_ARGS_ONE_VALUE   VERSION)
  set(PARSE_VERSION_ARGS_MULTI_VALUE )
  cmake_parse_arguments(PARSE_VERSION "${PARSE_VERSION_ARGS_FLAGS}" "${PARSE_VERSION_ARGS_ONE_VALUE}" "${PARSE_VERSION_ARGS_MULTI_VALUE}" ${ARGN})

  if(${PARSE_VERSION_DEBIAN})
    if(NOT EXISTS "${${PROJECT_NAME}_SOURCE_DIR}/debian/changelog")
      message(FATAL_ERROR "parse_version with DEBIAN flag requires a file named debian/changelog")
    endif()

    execute_process(
      COMMAND dpkg-parsechangelog
      COMMAND grep "Version"
      WORKING_DIRECTORY ${${PROJECT_NAME}_SOURCE_DIR}
      OUTPUT_VARIABLE ${PROJECT_NAME}_VERSION
      OUTPUT_STRIP_TRAILING_WHITESPACE
    )
    string(REGEX REPLACE "Version: "  "" ${PROJECT_NAME}_VERSION   "${${PROJECT_NAME}_VERSION}")

  elseif(${PARSE_VERSION_VERSION_FILE})
    if(NOT EXISTS "${${PROJECT_NAME}_SOURCE_DIR}/version")
      message(FATAL_ERROR "parse_version with VERSION_FILE flag requires a file named version")
    endif()

    execute_process(
      COMMAND cat version
      WORKING_DIRECTORY ${${PROJECT_NAME}_SOURCE_DIR}
      OUTPUT_VARIABLE ${PROJECT_NAME}_VERSION
      OUTPUT_STRIP_TRAILING_WHITESPACE
    )

  elseif(NOT "${PARSE_VERSION_VERSION}" STREQUAL "")
    set(${PROJECT_NAME}_VERSION "${PARSE_VERSION_VERSION}")

  else()
    message(FATAL_ERROR "parse_version requires DEBIAN or VERSION_FILE flags or a VERSION number")

  endif()

  string(REGEX REPLACE "[^.0-9].*$" "" ${PROJECT_NAME}_VERSION   "${${PROJECT_NAME}_VERSION}")
  string(REGEX REPLACE "\\..*$"     "" ${PROJECT_NAME}_SOVERSION "${${PROJECT_NAME}_VERSION}")

  message(STATUS "project ${PROJECT_NAME} version ${${PROJECT_NAME}_VERSION}")

  set(${PROJECT_NAME}_VERSION   "${${PROJECT_NAME}_VERSION}"   PARENT_SCOPE)
  set(${PROJECT_NAME}_SOVERSION "${${PROJECT_NAME}_SOVERSION}" PARENT_SCOPE)

endfunction(parse_version)
