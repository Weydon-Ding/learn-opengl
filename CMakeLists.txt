cmake_minimum_required(VERSION 3.4...3.20 FATAL_ERROR)

project(learn_opengl)

add_subdirectory(glfw)

aux_source_directory(${PROJECT_SOURCE_DIR}/src DIR_MAIN_SRCS)
aux_source_directory(${PROJECT_SOURCE_DIR}/glad/src DIR_GLAD_SRCS)
add_executable(${PROJECT_NAME} ${DIR_MAIN_SRCS} ${DIR_GLAD_SRCS})
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/glad/include)
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/glfw/include)
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/src)
target_link_libraries(${PROJECT_NAME} PUBLIC glfw)