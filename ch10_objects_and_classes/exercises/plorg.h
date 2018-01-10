#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
    private:
        static const int Len = 19;
        char name[Len];
        int ci;

    public:
        Plorg(const int ci, const char* name = "Plorga");
        void set_ci(const int ci);
        void show() const;

};

#endif
