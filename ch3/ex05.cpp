#include <iostream>
using namespace std;

int main() {

    long long world_population, us_population;

    cout << "Enter the world's population: ";
    cin >> world_population;

    cout << "Enter the population of the US: ";
    cin >> us_population;

    cout << "The population of the US is "
        << ((double)us_population / world_population) * 100
        << "\% of the world population." << endl;
    return 0;
}
