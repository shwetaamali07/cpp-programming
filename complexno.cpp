#include<iostream>
using namespace std;

class complex
{
private:
   int real1,image1,real2,image2;
   int addreal,addimage,subreal,subimage;
public:
  void input()
  {
  cout<<"First complex number:";
  cin>>real1>>image1;
  cout<<"Second complex number:";
  cin>>real2>>image2;
  }
  
  void add()
  {
   addreal=real1+real2;
   addimage=image1+image2;
   }
   
   void sub()
   {
    subreal=real1-real2;
    subimage=image1-image2;
   }
    
   void display()
   {
     cout<<"Addition="<<addreal;
     if(addimage>=0)
       cout<<"+"<<addimage<<"i";
     else
       cout<<"-"<<-addimage<<"i";
       
       cout<<"\nSubstraction="<<subreal;
       if(subimage>=0)
         cout<<"+"<<subimage<<"i";
       else
         cout<<"-"<<-subimage<<"i";
   }
};
int main()
{
  complex c;
  
  c.input();
  c.add();
  c.sub();
  c.display();
  
  return 0;
}
