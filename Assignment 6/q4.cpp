#include<iostream>
using namespace std;
int odd(int a ,int b){
cout<<"Odd numbers between "<<a <<" and "<<b<<" are: "<<endl;
    for (int i =a;i<=b;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
int main()
{
int x,y;
cout<<"Enter the Start Point: ";
cin>>x;
cout<<"Enter the End Point: ";
cin>>y;
odd(x,y);
return 0;
}