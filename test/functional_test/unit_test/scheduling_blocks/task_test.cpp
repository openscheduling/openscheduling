#include "gtest/gtest.h"

#include <openscheduling/scheduling_blocks/task.hpp>

using ::openscheduling::scheduling_blocks::Task;

TEST(task_test, test_constructor)
{
    
    Task t(0,"",1.0);
    
    EXPECT_EQ(0, t.GetId());
    EXPECT_EQ("", t.GetName());
    EXPECT_EQ(1.0, t.GetPriority());
}

TEST(task_test, test_destructor)
{
    
}