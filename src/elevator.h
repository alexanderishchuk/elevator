#ifndef ELEVATOR_H
#define ELEVATOR_H


class Elevator
{
    public:
        Elevator();
        virtual ~Elevator();
        void set_location(int);
        int get_location();
    protected:
    private:
        int location;
};

#endif // ELEVATOR_H