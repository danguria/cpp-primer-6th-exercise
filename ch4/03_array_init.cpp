#include <iostream>
using namespace std;

int main() {

    // are they allowed?
    int cards[4] = {3, 6, 8, 10}; // ok
    int hand[4];                  // ok
    hand[4] = {5, 6, 7, 9};       // not allowed
    hand = cards;                 // not

    float hotelTips[5] = {5.0, 2.5}; // allowed, remaining elements are set to zero
    int totals[500] = {};  // allowed, all elements are set to zero

    int things[] = {1, 5, 3, 8};    // allowed, compiler counts the elements for you 

    return 0;
}
