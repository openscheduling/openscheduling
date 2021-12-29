#include "task.hpp"

#include <iostream>

using openscheduling::scheduling_blocks::Task;

Task::Task(unsigned int id, std::string name, double priority)
:   Task(id, name, priority, "", nullptr)
{

}

Task::Task(unsigned int id, std::string name, double priority, std::string description, constraints::Constraint* constraint)
:   SchedulingBlock(id, name),
    description_(description),
    priority_(priority),
    constraint_(constraint)
{

}

Task::~Task()
{
    
}

const double Task::GetPriority() const
{
    return priority_;
}