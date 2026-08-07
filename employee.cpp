#include<iostream>
using namespace std;

class Employee
{
public:
  int employeeID;
  string name;
  float salary;
  
public:
  void accept()
  {
   cout<<"Enter Employee ID:";
   cin>>employeeID;
   
   cout<<"Enter Employee Name:";
   cin>>name;
  
  cout<<"Enter Salary:";
  cin>>salary;
  }
  void display()
  {
   cout<<"\nEmployee Details"<<endl;
   cout<<"Employee ID:"<<employeeID<<endl;
   cout<<"Employee Name:"<<name<<endl;
   cout<<"salary:"<<salary<<endl;
   }
  };
  int main()
  {
  Employee e;
  e.employeeID=100;
  cout<<e.employeeID;
  e.accept();
  e.display();
  
  return 0;
}


