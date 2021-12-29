#include "constraint.hpp"

#include <iostream>

using openscheduling::scheduling_blocks::constraints::Constraint;

Constraint::Constraint(std::string name)
:   name_(name)
{
    
}

Constraint::~Constraint()
{

}