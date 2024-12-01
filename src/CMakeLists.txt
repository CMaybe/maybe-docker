find_package(Eigen3 REQUIRED)

add_library(example)
target_sources(example
PRIVATE
example.cpp
PUBLIC
example.hpp
)

target_include_directories(example
PUBLIC
${CMAKE_CURRENT_LIST_DIR}
)

target_link_libraries(example Eigen3::Eigen)

