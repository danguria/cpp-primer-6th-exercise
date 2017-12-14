#include <iostream>
using namespace std;

int main() {
    double mile, gallon;
    cout << "How many miles have you driven?: ";
    cin >> mile;
    
    cout << "How many gallons have you used?: ";
    cin>> gallon;

    cout << "You have used " << mile / gallon << " miles/gallon" << endl;
    return 0;
}
