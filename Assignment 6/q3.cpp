#include<iostream>
using namespace std;
int eligible(int age){
    if(age>=18){
      cout<<"Yes, you are eligible";
    }
    else{
        cout<<"No, you are not eligible";
    }
    return 0;
}

int main()
{
int age;
cout<<"Enter the age: ";
cin>>age;
eligible(age);
return 0;
}