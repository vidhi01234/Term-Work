#include<iostream>
using namespace std;

void calculate_area(int side)
{
    int area=side*side;
    cout<<"Area of square: "<<area<<endl;
}
void calculate_area(int len,int bre)
{
    int area=len*bre;
    cout<<"Area of breath: "<<area<<endl;
}
void calculate_area()
{
    int base,height;
    float area=0;
    cout<<"Enter base and height: ";
    cin>>base>>height;
    area=(0.5)*base*height;
    cout<<"Area of triangle: "<<area<<endl;
}
int main()
{
    int length,breadth,side;
    cout<<"Enter side of square:"<<endl;
    cin>>side;
    cout<<"Enter side of square:"<<endl;
    cin>>length>>breadth;
    calculate_area(side);
    calculate_area(length,breadth);
    calculate_area();
    return 0;
}
