file(GLOB CSTYLE_SRC_FILES cstyle/*.c)
add_library(cstyle ${CSTYLE_SRC_FILES})

file(GLOB SAMPLE_SRC_FILES sample/*.c)
foreach(src_file ${SAMPLE_SRC_FILES})
    get_filename_component(dest_file ${src_file} NAME_WE)
    add_executable(${dest_file} ${src_file})
    target_link_libraries(${dest_file} cstyle)
endforeach()
