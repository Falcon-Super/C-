#include<iostream>
using namespace std;
int main()
{
    cout<<"Fahrenheit to celsius converter.\n";
    double f; //f for fahrenheit
    cout<< "Enter fahrenheit: ";
    cin>> f;
    double c;
    c=(f-32)*5/9;
    cout<< f << " Degrees fahrenheit= " << c << " Degrees celsius.\n";
}