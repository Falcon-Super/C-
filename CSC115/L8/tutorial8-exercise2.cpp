#include<iostream>
#include<cmath>
using namespace std;


struct Point1{
    public:
        float x1;
        float y1;
}p1;

struct Point2{
public:
    float x2;
    float y2;
}p2;

float x1;
float y_1;
float x2;
float y2;



int main(){
    cout<<"Enter x1: ";
    cin>>x1;
    cout<<"Enter y1: ";
    cin>>y_1;

    cout<<"Enter x2: ";
    cin>>x2;
    cout<<"Enter y2: ";
    cin>>y2;

    p1.x1= x1;
    p1.y1= y_1;
    p2.x2=x2;
    p2.y2=y2;
    float difx= x2 - x1;
    float dify= y2-y_1;
    float powx= pow(difx, 2);
    float powy= pow(dify, 2);
    float pow2= powx+powy;

    float dist = sqrtf(pow2);

    p1= {x1, y_1};
    p2= {x2, y2};
    cout<<"The distance is: "<<dist<<"\n";
}