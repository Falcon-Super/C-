#include<iostream>
using namespace std;

struct Rectangle{
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
    float perimieter= (2*r.length)+(2*r.width);
    cout<<"Perimeter: "<<perimieter<<"\n";
}

void rectpoints(){
    cout<<"Top left point is: (x,y)=("<<x<<","<<y<<")"<<"\n";
    cout<<"Top right point is: (x,y)=("<<x+r.length<<","<<y<<")"<<"\n";
    cout<<"Bottom right point is: (x,y)=("<<x+r.length<<","<<y-r.width<<")"<<"\n";
    cout<<"Bottom left point is: (x,y)=("<<x<<","<<y-r.width<<")"<<"\n";
}

void moverect(){
    cout<<"Where to move the rectangle?"<<"\n";
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;
}

float z;
float w;
float length;
float width;


void mergedrect(){
    cout<<"Enter second rectangle: "<<"\n";
    cout<<"Enter x coordinate: ";
    cin>>z;
    cout<<"Enter y coordinate: ";
    cin>>w;
    cout<<"Enter the length: ";
    cin>>length;
    cout<<"Enter the width: ";
    cin>>width;
    cout<<"Merged rectangle: "<<"\n";
    cout<<"Top left point is: (x,y)=("<<x<<","<<y<<")"<<"\n";
    cout<<"Length: "<<length+r.length<<"\n";
    cout<<"Width: "<<width+r.width<<"\n";
    cout<<"Top right point is: (x,y)=("<<z+r.length+length-1<<","<<w-1<<")"<<"\n";
    cout<<"Bottom right point is: (x,y)=("<<z+r.length+length-1<<","<<w-width-r.width-1<<")"<<"\n";
    cout<<"Bottom left point is: (x,y)=("<<z-1<<","<<w-width-r.width-1<<")"<<"\n";

}





int main(){
    readinfo();
    moverect();
    printrectinfo();
    rectpoints();
    mergedrect();
}
