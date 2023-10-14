#include<bits/stdc++.h>
using namespace std;
class Student {
  public:
  int id;
  string name;
  string department;
  char section;
  string DOB;
  Student(int id,string name,string department,char section,string DOB){
    this->id = id;
    this->name = name;
    this->department = department;
    this->section = section;
    this->DOB  = DOB;

  }
  void printStudent_Details(){
   cout<<"ID:"<<id<<"\n";
   cout<<"NAME:"<<name<<"\n";
   cout<<"DEPARTMENT:"<<department<<"\n";
   cout<<"SECTION:"<<section<<"\n";
   cout<<"DOB:"<<DOB<<"\n";
   cout<<"-----------------------------"<<"\n";
  }
};
int main(){
  Student s = Student(1,"VICKY","CSE",'C',"05/12/2002");
  s.printStudent_Details();
  Student s1 = Student(2,"LEO","CSE",'C',"02/09/2003");
  s1.printStudent_Details();
}
