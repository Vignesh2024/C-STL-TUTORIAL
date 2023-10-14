#include<bits/stdc++.h>
using namespace std;
class Student {
  public:
  int id;
  string name;
  string department;
  char section;
  string DOB;
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
  Student s;
  s.id = 1;
  s.name = "VICKY";
  s.department = "CSE";
  s.section = 'B';
  s.DOB = "05/12/2002";
  s.printStudent_Details();
  Student s1;
  s1.id = 2;
  s1.name = "LEO";
  s1.department = "CSE";
  s1.section = 'B';
  s1.DOB = "06/12/2002";
  s1.printStudent_Details();
}
