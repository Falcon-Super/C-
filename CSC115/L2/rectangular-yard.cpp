#include<iostream>
using namespace std;

int main()
{
    //Variables
    float length_rectangular_yard;
    float width_rectangular_yard;
    float length_rectangular_house;
    float width_rectangular_house;

    //Input
    cout <<"Enter the length of the rectangular yard: ";
    cin >> length_rectangular_yard;
    cout <<"Enter the width of the rectangular yard: ";
    cin >> width_rectangular_yard;
    cout <<"Enter the length of the rectangular house: ";
    cin >> length_rectangular_house;
    cout <<"Enter the width of the rectangular house: ";
    cin >> width_rectangular_house;

    float yard_area= length_rectangular_yard*width_rectangular_yard;
    float house_area= length_rectangular_house*width_rectangular_house;
    float total_area = yard_area+house_area;
    float ground_area = total_area-house_area;
    float time = ground_area/2;
    cout <<"The total time is " <<time<< "s" "\n";
}

