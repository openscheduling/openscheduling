#include "scheduling_block.hpp"

#include <iostream>

using openscheduling::scheduling_blocks::SchedulingBlock;

SchedulingBlock::SchedulingBlock(unsigned int id, std::string name)
:   id_(id),
    name_(name)
{
    std::cout << "Initialized SB..." << std::endl;
}

SchedulingBlock::~SchedulingBlock()
{
    std::cout << "Destroy SB..." << std::endl;
}

const unsigned int SchedulingBlock::GetId() const
{
    return id_;
}

const std::string SchedulingBlock::GetName() const 
{
    return name_;
}