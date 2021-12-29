#ifndef _SCHEDULING_BLOCK_
#define _SCHEDULING_BLOCK_

#include <string>

namespace openscheduling
{
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
             * @brief Construct a new Scheduling Block object
             * 
             * @param id 
             * @param name 
             * @param priority 
             */
            SchedulingBlock(unsigned int id, std::string name);

            /**
             * Destructor
             **/
            virtual ~SchedulingBlock();

            const unsigned int GetId() const;

            const std::string GetName() const;


        private:
            

            /**
             * @brief SB ID
             * 
             */
            unsigned int id_;
            
            /**
             * The name of a SB. The default value is an empty string
             **/
            ::std::string name_;
            
        };

    } //namespace scheduling_blocks

} // namespace openscheduling


#endif /* _SCHEDULING_BLOCK_ */
