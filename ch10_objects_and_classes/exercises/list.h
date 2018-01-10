#ifndef LIST_H_
#define LIST_H_

typedef int Item;

class List
{
    private:
        int capacity;
        int top;
        Item *items;

    public:

        List(int capacity = 10); // create empty list
        ~List();

        void add(Item& i);
        bool isempty() const;
        bool isfull() const;

        void visit(void (*pf)(Item&));


};

#endif
