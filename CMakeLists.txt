cmake_minimum_required(VERSION 3.0)

project(my_project)

find_package(BISON REQUIRED)
find_package(FLEX REQUIRED)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/output)

include_directories(${PROJECT_SOURCE_DIR}/src
)

BISON_TARGET(MyParser ./src/parse.y ${PROJECT_SOURCE_DIR}/src/parse.cpp)
FLEX_TARGET(MyScanner ./src/lexer.l ${PROJECT_SOURCE_DIR}/src/lexer.cpp)
ADD_FLEX_BISON_DEPENDENCY(MyScanner MyParser)

add_executable(out  ./src/AST_tree.cpp ${BISON_MyParser_OUTPUTS} ${FLEX_MyScanner_OUTPUTS})