#ifndef _TASK_
#define _TASK_

#include <list>

#include "scheduling_block.hpp"

#include "constraints/constraint.hpp"

namespace openscheduling
{
    namespace scheduling_blocks {

        /***
        * A task is the leaf of the scheduling block tree structure.
        * @see Sequence
        * @see SchedulingBlock
        */
        class Task: public SchedulingBlock {

        public:
            
                /**
                 * @brief Construct a new Task object
                 * 
                 * @param id 
                 * @param name 
                 * @param priority 
                 */
                Task(unsigned int id, std::string name, double priority);

                /**
                 * @brief Construct a new Task object
                 * 
                 * @param id 
                 * @param name 
                 * @param priority 
                 * @param description 
                 * @param constraint 
                 */
                Task(unsigned int id, std::string name, double priority, std::string description, constraints::Constraint* constraint);

                /**
                 * @brief Destroy the Task object
                 * 
                 */
                ~Task();

                /**
                 * @brief Get the Priority object
                 * 
                 * @return const double 
                 */
                const double GetPriority() const;


        private:       

            /**
            * @brief description of the task. The default value is an empty string
            * 
            */
            ::std::string description_;

            /**
             * @brief The priority of a task. The default value is 0.
             * 
             */
            double priority_;
            
            /**
             * @brief 
             * 
             */
            constraints::Constraint* constraint_;


            
        };

    } //namespace scheduling_blocks
    
} // namespace openscheduling


#endif /* _TASK_ */
