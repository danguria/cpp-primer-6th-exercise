#ifndef MOVE_H_
#define MOVE_H_

class Move
{
    private:
        double x;
        double y;
    public:
        Move(double a = 0, double b = 0);
        void showmove() const;

        // this function adds x of m to x of invoking object to get new x,
        // add y of m to y of invoking object to get new y, creates a new
        // move object initialized to new x, y values and returns it
        Move add(const Move& m);

        void reset(double a = 0, double b = 0); // resets x, y to a, b
};

#endif
