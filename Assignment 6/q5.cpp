#include<iostream>
using namespace std;
int prime(int a,int b){
    bool flag;
    cout<<"Prime numbers between "<<a <<" and "<<b<<" are: "<<endl;
    if(a>2){
        a=2;
    }
    for(int i=a;i<=b;i++){
        flag=true;
        for (int j = 2; j < i; j++)
        {
            if(i%j==0){
                flag=false;
            }
        }
        if(flag==true){
            cout<<i<<" ";
        }
        
    }
}

int main()
{
int x,y;
cout<<"Enter the Start Point: ";
cin>>x;
cout<<"Enter the End Point: ";
cin>>y;
prime(x,y);


return 0;
}