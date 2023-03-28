#include<iostream>
using namespace std;


int num1;
int num2;



int add(){
    return num1+num2;
}



void print_numbers(){
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Read integers: "<<num1<<" and "<<num2;
    cout<<"\nTheir sum is: "<<add();
}



int main(){
    print_numbers();
}