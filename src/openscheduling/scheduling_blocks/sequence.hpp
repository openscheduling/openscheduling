#ifndef _SEQUENCE_
#define _SEQUENCE_

#include "scheduling_block.hpp"
#include "sb_relations/sb_relation.hpp"

namespace scheduling_blocks {

    /***
    * A sequence is the container/composite of the SB.
    * It also defines how the SB are related within a sequence
    * @see SchedulingBlock
    * @see Task
    */
    class Sequence: public SchedulingBlock {

       public:
          
          /**
           * Default constructor
           **/
           Sequence();

          /**
           * Destructor
           **/
           virtual ~Sequence();
           
           /**
           * Add a SB to the sequence
           **/
           void AddSB(SchedulingBlock& sb);

           /**
           * Remove a SB from the sequence
           **/
           void RemoveSB(SchedulingBlock& sb);
           
           /**
           * Sets the SB relation of the sequence
           * @see SBRelation
           **/
           void SetSBRelation(SBRelation& sb_relation);

       private:
           
          /**
           * A list of SBs
           **/
           ::std::list<SchedulingBlock*> sbs_;
          
    };

} //namespace scheduling_blocks

#endif /* _SEQUENCE_ */
