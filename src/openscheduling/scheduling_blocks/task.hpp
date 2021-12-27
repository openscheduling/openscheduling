#ifndef _TASK_
#define _TASK_

#include "scheduling_block.hpp"

namespace scheduling_blocks {

    /***
    * A task is the leaf of the scheduling block tree structure.
    * @see Sequence
    * @see SchedulingBlock
    */
    class SchedulingBlock: public SchedulingBlock {

       public:
          /**
           * Default constructor
           **/
           Task();

          /**
           * Destructor
           **/
           virtual ~Task();

       private:
           
          /**
           * A brief description of the task. The default value is an empty string
           **/
           ::std::string description_;
          
    };

} //namespace scheduling_blocks

#endif /* _TASK_ */
