#ifndef _SEQUENCE_
#define _SEQUENCE_

#include <list>

#include "scheduling_block.hpp"

namespace openscheduling
{
    namespace scheduling_blocks {

        /***
        * A sequence is the container/composite of the SB.
        * It also defines how the SB are related within a sequence
        * @see SchedulingBlock
        * @see Task
        */
        class Sequence: public SchedulingBlock {

        public:
            
           
            Sequence(unsigned int id, std::string name);

            /**
             * Destructor
             **/
            ~Sequence();
            
            /**
             * Add a SB to the sequence
             **/
            void AddSB(SchedulingBlock& sb);

            /**
             * Remove a SB from the sequence
             **/
            void RemoveSB(SchedulingBlock& sb);
            

        private:
            
            /**
             * A list of SBs
             **/
            ::std::list<SchedulingBlock*> sbs_;

        };

    } //namespace scheduling_blocks

} // namespace openscheduling


#endif /* _SEQUENCE_ */
