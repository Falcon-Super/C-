#include <iostream>
using namespace std;

int num;

int read_integer(){
    cout<<"Enter an integer: ";
    cin>>num;
    cout<<num;
    return num;
}

int main()
{
    read_integer();
    return num;
}
