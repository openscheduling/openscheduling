#ifndef _CONSTRAINT_
#define _CONSTRAINT_

namespace scheduling_blocks {

    namespace constraints {

        /**
        * A constraint is a condition that a SB must satisfy when the SB is scheduled
        **/
        class Constraint {

            public:
               
               /**
                * Default constructor
                **/
                Constraint();

               /**
                * Destructor
                **/
                virtual ~Constraint();

                bool IsFeasible() const = 0;

                void GetPossiblePeriods() const = 0;

        };

    } //namespace constraints

} //namespace scheduling_blocks

#endif /* _CONSTRAINT_ */
