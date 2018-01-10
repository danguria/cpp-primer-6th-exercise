#include "list.h"

List::List(int capacity)
{
    this->capacity = capacity;
    this->top = 0;
    items = new Item[capacity];
}

List::~List()
{
    delete [] items;
}


void List::add(Item& i)
{
    if (!isfull())
        items[top++] = i;
}

bool List::isempty() const
{
    return top == 0;
}

bool List::isfull() const
{
    return top == capacity;
}
        
void List::visit(void (*pf)(Item&))
{
    for (int i = 0; i < top; i++)
        (*pf)(items[i]);
}
