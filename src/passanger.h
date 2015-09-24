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
        void set_loc_id(int);
        int get_loc_id();
    protected:
    private:
        int location;
        int loc_id;
};

#endif // PASSANGER_H
