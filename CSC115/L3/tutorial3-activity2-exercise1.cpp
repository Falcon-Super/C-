#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3;

    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;

    cout<<"What operation do you want?\n1)Addition\n2)Multiplaction\n3)Division\n";
    cout<<"Choose the operation: ";
    cin>>n3;

    if(n3==1){
        cout<< n1;
        cout<<"+";
        cout<<n2;
        cout<<"="; 
        cout<<n1+n2;

    }
    
    else if (n3==2)
    {
        cout<< n1;
        cout<<"*";
        cout<<n2;
        cout<<"=";
        cout<<n1*n2;
    
    }
    else if (n3==3)
    {
        cout<< n1;
        cout<<"/";
        cout<<n2;
        cout<<"="; 
        cout<<n1/n2;
    }
    
}