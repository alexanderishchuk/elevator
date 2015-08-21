/* test.h
    Main elevator test, counts the amount of passangers for given time */
#ifndef TEST_H
#define TEST_H


class Test
{
    public:
        Test();
        virtual ~Test();
        void run ();
        void init_components ();
    protected:
    private:
};

#endif // TEST_H