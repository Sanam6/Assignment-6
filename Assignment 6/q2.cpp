#include<iostream>
using namespace std;
int pi= 3.14;

int area(int r){
    cout<<"The area of the circle: "<<pi*r*r<<endl;
    return 0;
}
double circum(int r){
    cout<<"The circumference of the circle: "<<2*pi*r<<endl;
    return 0;
}
int main()
{
double radius;
cout<<"Enter the radius: ";
cin>>radius;
area(radius);
circum(radius);

return 0;
}
