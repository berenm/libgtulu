if(NOT EXISTS "cmake/cotire.cmake" OR COTIRE_FORCE_DOWNLOAD)
  message(STATUS "Downloading cotire.cmake...")
  file(DOWNLOAD "https://github.com/sakra/cotire/raw/master/CMake/cotire.cmake" "cmake/cotire.cmake")
endif()

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_BINARY_DIR}/cmake)
include(cotire OPTIONAL RESULT_VARIABLE COTIRE_FOUND)

if(NOT COTIRE_FOUND)
  function(cotire)
  endfunction()
endif()

function(add_cotire TARGET)
  get_target_property(COTIRE_PREFIX_HEADER_IGNORE_PATH ${TARGET} COTIRE_PREFIX_HEADER_IGNORE_PATH)
  if(NOT COTIRE_PREFIX_HEADER_IGNORE_PATH)
    set(COTIRE_PREFIX_HEADER_IGNORE_PATH "${CMAKE_CURRENT_SOURCE_DIR}")
  endif()

  list(APPEND COTIRE_PREFIX_HEADER_IGNORE_PATH
    "/usr/include/boost/preprocessor/"
    "/usr/include/boost/function/detail"
    "/usr/include/boost/utility/detail"
    "/usr/include/boost/function/"
    "/usr/include/boost/mpl/aux_/"
  )
  list(REMOVE_DUPLICATES COTIRE_PREFIX_HEADER_IGNORE_PATH)

  set_target_properties(${TARGET} PROPERTIES
    COTIRE_PREFIX_HEADER_IGNORE_PATH "${COTIRE_PREFIX_HEADER_IGNORE_PATH}"
  )
  cotire(${TARGET})
endfunction()
