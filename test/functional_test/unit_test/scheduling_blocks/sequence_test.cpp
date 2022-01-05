#include "gtest/gtest.h"

#include <openscheduling/scheduling_blocks/sequence.hpp>

using openscheduling::scheduling_blocks::Sequence;

TEST(sequence_test, test_constructor)
{
    Sequence seq(0, "test");
}

TEST(sequence_test, test_destructor)
{
    
}