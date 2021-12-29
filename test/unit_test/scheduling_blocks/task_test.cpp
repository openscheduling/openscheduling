#include "gtest/gtest.h"

#include <openscheduling/scheduling_blocks/task.hpp>

using ::openscheduling::scheduling_blocks::Task;

TEST(task_test, test_constructor)
{
    
    Task t(0,"",1.0);
    t.GetId();
}

TEST(task_test, test_destructor)
{
    
}