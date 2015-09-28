#ifndef PLANNER_H
#define PLANNER_H

#include "clock.h"

class Planner
{
    public:
        Planner();
        virtual ~Planner();
        void plan_psngr(int);
    protected:
    private:
        int psngr_time[2][3];
};

#endif // PLANNER_H
