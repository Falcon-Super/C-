#include<iostream>
using namespace std;
int main()
{
    int num, i, fact=1;
    cout<<"Enter a positive integer: ";
    cin>>num;
    for(i=num; i>=1; i--)
        fact = fact*i;
    cout<<"\nFactorial of "<< num << " = "<<fact;
    cout<<endl;
    return 0;
}

