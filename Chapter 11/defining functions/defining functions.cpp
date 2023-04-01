#include <iostream>

using namespace std;

const double pi{3.14159};

double calc_area_circle(double radius)
{
    return pi*radius*radius;
}

void area_circle()
{
    double radius{};
    cout<<"\nEnter the redius of the circle";
    cin>> radius;

    cout<<"The area of a circle with radius "<<radius<<" is "<<calc_area_circle(radius)<<endl;
}

double calc_volume_cylinder(double radius,double height)
{
    return pi*radius*radius*height;
}

void valume_cylinder()
{
    double radius{};
    double height{};
    cout<<"Enter the radius of the cylinder ";
    cin>>radius;
    cout<<"Enter the height of the cylinder ";
    cin>>height;
    cout<<"The volume of a cylinder with radius "<<radius<<"and height"<<height<<" is "<<calc_volume_cylinder(radius,height)<<endl;
}

int main()
{
    area_circle();
    valume_cylinder();

    return 0;
}