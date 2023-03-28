#include<iostream>
using namespace std;

struct Point{
    double x;
    double y;
}p1;



int read_point(){
    cout<<"Enter x: ";
    cin>>p1.x;
    cout<<"Enter y: ";
    cin>>p1.y;
    return 0;
}

int print_point(){
    cout<<"(x,y)= "<<"("<<p1.x<<","<<p1.y<<")"<<endl;
    return 0;
}

int main(){
    read_point();
    print_point();
}