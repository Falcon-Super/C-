#include<iostream>
using namespace std;

int num1;
int num2;

int read_integer(){
    cout<<"Enter the first integer: ";
    cin>>num1;
    cout<<num1;
    cout<<"\nEnter the second integer: ";
    cin>>num2;
    cout<<num2;
    return 0;
}

int main()
{
    read_integer();
    return 0;
}
