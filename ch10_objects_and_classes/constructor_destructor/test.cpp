
class Stock
{
    public:
    int *pt;

    Stock()
    {
        pt = new int;
        *pt = 4;
    }

    ~Stock()
    {
        delete pt;
    }
};

class Person
{
    string name;
    int age;

    void study()
    {
    }
};


int main()
{
    Stock s;
    cout << *(s.pt) << endl; // 4

    Stock s2;
    cout << *(s2.pt) << endl;


    return 0;
}
