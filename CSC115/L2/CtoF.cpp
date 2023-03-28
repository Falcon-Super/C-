#include<iostream>
using namespace std;
int main()
{
    float C,F; //C for celsius and F for fahrenheit
    cout<<"Enter the value of temperature in celsius: ";
    cin>>C;
    F=(C*9/5)+32;
    cout<<"Temperature in fahrenheit: "<<F;
    return 0;
}