#ifndef _SCHEDULING_BLOCK_
#define _SCHEDULING_BLOCK_

namespace scheduling_blocks {

    /***
    * A scheduling block a.k.a SB, is the main structure of the library.
    * This is the abstract class of the scheduling block tree.
    * The scheduling block tree is used by a client to indicate how the tasks shall be scheduled.
    * @see Sequence
    * @see Task
    */
    class SchedulingBlock {

       public:
          /**
           * Default constructor
           **/
           SchedulingBlock();

          /**
           * Destructor
           **/
           virtual ~SchedulingBlock();

       private:
           
          /**
           * The name of a SB. The default value is an empty string
           **/
           ::std::string name_;


          /**
           * The priority of an SB. The default value is 0.
           **/
           double priority_;
          
    };

} //namespace scheduling_blocks

#endif /* _SCHEDULING_BLOCK_ */
