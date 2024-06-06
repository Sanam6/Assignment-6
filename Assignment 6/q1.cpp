#include<iostream>
using namespace std;
int square(int a){
    cout<<a*a<<" ";
    return 0;
}

int main()
{
    int a=5;
    cout<<"Square of first five natural numbers is: ";
    for (int i = 1; i <= a; i++)
    {
        square(i);
    }
    



return 0;
}