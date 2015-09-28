#ifndef FLOOR_H
#define FLOOR_H


class Floor
{
    public:
        Floor();
        virtual ~Floor();
        bool get_psngr_present();
        void set_psngr_present(bool);
        bool get_psngr_planned();
        void set_psngr_planned(bool);
    private:
        bool psngr_present;
        bool psngr_planned;
};

#endif // FLOOR_H
