#include <iostream>
using namespace std;
int main()
{ int number_of_bars;
    double one_weight, total_weight;
    cout<< "Enter the number of candy bars in a package\n";
    cout<< "and the weight in ounces of one candy bar.\n";
    cout<< "Then press return.\n";
    cin>> number_of_bars;
    cin>> one_weight;
    total_weight = one_weight * number_of_bars;
    cout<< "Total weight is " <<total_weight << " ounces.\n";
    return 0;
}