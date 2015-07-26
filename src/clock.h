/* clock.h
    Sets and counts time for tests. */
#ifndef CLOCK_H
#define CLOCK_H


class Clock
{
    public:
        Clock(int = 8, int = 0, int = 0);
        virtual ~Clock();
        void set_clock(int, int, int);
        void print_time();
        void test_clock_setting();
    protected:
    private:
        int hours;
        int minutes;
        int seconds;
};

#endif // CLOCK_H
