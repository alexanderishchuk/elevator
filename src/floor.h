#ifndef FLOOR_H
#define FLOOR_H


class Floor
{
    public:
        Floor();
        virtual ~Floor();
        bool has_passanger ();
        void place_passanger ();
        void release_passanger ();

    protected:
    private:
        bool passanger;
};

#endif // FLOOR_H