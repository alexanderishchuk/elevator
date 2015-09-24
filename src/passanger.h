#ifndef PASSANGER_H
#define PASSANGER_H


class Passanger
{
    public:
        Passanger();
        virtual ~Passanger();
        void push_button();
        void set_location(int);
        int get_location();
    protected:
    private:
        int location;
};

#endif // PASSANGER_H