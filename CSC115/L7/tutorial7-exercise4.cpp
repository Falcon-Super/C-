#include<iostream>
using namespace std;

float num1;
float num2;

int add(){
    return num1+num2;
}

int multiply(){
    return num1*num2;
}

float divide(){
    return num1/num2;
}

void print_menu(){
    int choice;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Read integers: "<<num1<<" and "<<num2;
    cout<<"\nPlease choose:\n1)Addition\n2)Multiplication\n3)Division";
    cout<<"\nPlease enter a number: ";
    cin>>choice;
    if(choice==1){
        cout<<"\nTheir sum is: "<<add();
    }
    if(choice==2){
        cout<<"\nTheir multiplication is: "<<multiply();
    }
    if(choice==3){
        cout<<"\nTheir division is: "<<divide();
    }
}





int main(){
    print_menu();
}
