#include "sequence.hpp"

using openscheduling::scheduling_blocks::Sequence;

Sequence::Sequence(unsigned int id, std::string name)
:   SchedulingBlock(id, name)
{

}


Sequence::~Sequence()
{
    
}