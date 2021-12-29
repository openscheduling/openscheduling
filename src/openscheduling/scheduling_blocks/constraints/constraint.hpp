#if !defined(_CONSTRAINT_)
#define _CONSTRAINT_

#include <string>

namespace openscheduling
{
    namespace scheduling_blocks {

        namespace constraints {

            /**
            * A constraint is a condition that a SB must satisfy when the SB is scheduled
            * @see SchedulingBlock
            **/
            class Constraint {

                public:
                
                    /**
                     * @brief Construct a new Constraint object
                     * 
                     */
                    Constraint(::std::string name);

                    /**
                     * @brief Destroy the Constraint object
                     * 
                     */
                    virtual ~Constraint();

                    /**
                     * @brief 
                     * 
                     * @return true 
                     * @return false 
                     */
                    virtual bool IsFeasible() const = 0;
                
                private:

                    ::std::string name_;

            };

        } //namespace constraints

    } //namespace scheduling_blocks
    
} // namespace openscheduling


#endif // _CONSTRAINT_
