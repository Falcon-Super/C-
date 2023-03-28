#include<iostream>
using namespace std;

struct Rectangle{
    float topleftpoint;
    float length;
    float width;
}r;

float x;
float y;

void readinfo(){
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;
    cout<<"Enter length: ";
    cin>>r.length;
    cout<<"Enter width: ";
    cin>>r.width;
}

void printrectinfo(){
    cout<<"Top left point is: (x,y)=("<<x<<","<<y<<")"<<"\n";
    cout<<"Length: "<<r.length<<"\n";
    cout<<"Width: "<<r.width<<"\n";

}

void rectarea(){
    float area= r.length*r.width;
    cout<<"Area: "<<area<<"\n";
}

void rectperimeter(){
    float perimeter= (2*r.length)+(2*r.width);
    cout<<"Perimeter: "<<perimeter<<"\n";
}

void rectpoints(){
    cout<<"Top left point is: (x,y)=("<<x<<","<<y<<")"<<"\n";
    cout<<"Top right point is: (x,y)=("<<x+r.length<<","<<y<<")"<<"\n";
    cout<<"Bottom right point is: (x,y)=("<<x+r.length<<","<<y-r.width<<")"<<"\n";
    cout<<"Bottom left point is: (x,y)=("<<x<<","<<y-r.width<<")"<<"\n";
}





int main(){
    readinfo();
    printrectinfo();
    rectarea();
    rectperimeter();
    rectpoints();
}