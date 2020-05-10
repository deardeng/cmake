message(STATUS "include function.cmake")


function(listFiles DIR FILES)
    message(STATUS "list files in ${DIR} ,store to ${FILES}")
    file(GLOB_RECURSE srcs ${DIR}/*)
    SET(${FILES} ${srcs} PARENT_SCOPE)
endfunction()
