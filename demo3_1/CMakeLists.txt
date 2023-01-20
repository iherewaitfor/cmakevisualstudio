#Cmake 最低版本号要求
cmake_minimum_required(VERSION 2.8)

# 项目信息
project (Demo3_1)

# 查找目录下的所有源文件
# 并将名称保存到DIR_SRCS变量
aux_source_directory(. DIR_SRCS)

# 添加math子目录
add_subdirectory(math)

# 指定生成目标
add_executable(Demo ${DIR_SRCS})

# 添加链接库
target_link_libraries(Demo MathFunctions)


# PROJECT_BINARY_DIR 表示运行cmake命令的目录，通常为build目录
# $<CONFIGURATION>根据实际配置，为Debug或者Release
# 该命令用于在Demo.exe项目生成后，自动将其依赖的MathFunctions.dll动态链接库复制到Demo.exe的同一个文件夹下。
 
add_custom_command(TARGET Demo
  POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_BINARY_DIR}/math/$<CONFIGURATION>/MathFunctions.dll ${PROJECT_BINARY_DIR}/$<CONFIGURATION>
  )