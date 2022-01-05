add_executable(task_test task_test.cpp)
target_link_libraries(task_test GTest::gtest GTest::gtest_main SCHEDULING_BLOCKS)
gtest_discover_tests(task_test)

add_executable(sequence_test sequence_test.cpp)
target_link_libraries(sequence_test GTest::gtest GTest::gtest_main SCHEDULING_BLOCKS)
gtest_discover_tests(sequence_test)