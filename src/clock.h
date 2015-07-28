/* clock.h
    Sets and counts time for tests. */
#ifndef CLOCK_H
#define CLOCK_H
#define START "start"
#define STOP "stop"
#define CURRENT "current"


class Clock
{
    public:
        Clock(int = 8, int = 0, int = 0);
        virtual ~Clock();
        void set_time(char *);
        void print_time();
        void test_clock_setting();
    protected:
    private:
        int start_time[3];
        int stop_time[3];
        int current_time[3];
};

#endif // CLOCK_H