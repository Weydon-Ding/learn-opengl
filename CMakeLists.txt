cmake_minimum_required(VERSION 3.4...3.20 FATAL_ERROR)

project(learn_opengl)

add_subdirectory(glfw)
add_subdirectory(glm)

aux_source_directory(${PROJECT_SOURCE_DIR}/glad/src DIR_GLAD_SRCS)
aux_source_directory(${PROJECT_SOURCE_DIR}/stb/src DIR_STB_SRCS)
aux_source_directory(${PROJECT_SOURCE_DIR}/src DIR_MAIN_SRCS)
add_executable(${PROJECT_NAME} ${DIR_GLAD_SRCS} ${DIR_STB_SRCS} ${DIR_MAIN_SRCS})
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/glad/include)
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/glfw/include)
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/glm)
target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/stb/include)
target_include_directories(${PROJECT_NAME} PRIVATE ${DIR_MAIN_SRCS})
target_link_libraries(${PROJECT_NAME} PUBLIC glfw)
target_link_libraries(${PROJECT_NAME} PUBLIC glm)