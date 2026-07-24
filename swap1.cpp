#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter two numbers";
cin>>a>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"after swaping"<<endl;
cout<<"first num a="<<a<<endl;
cout<<"second num="<<b<<endl;
return 0;
}
