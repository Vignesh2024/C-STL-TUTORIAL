#include<bits/stdc++.h>
using namespace std;
class AbstractStudent{
   virtual void AskPromotion()=0;
};
class Student :AbstractStudent {
  private:
  int id;
  string name;
  string department;
  char section;
  string DOB;
 public:
 Student(int id,string name,string department,char section,string DOB){
    this->id = id;
    this->name = name;
    this->department = department;
    this->section = section;
    this->DOB  = DOB;

  }
 void setID(int id){
    this->id = id;
 }
 int getID(){
    return id;
 }
  void setName(string name){
    this->name = name;
 }
 string getName(){
    return name;
 }
  void setDepartment(string department){
    this->department = department;
  }
string getDepartment(){
    return department;
}
void setSection(char section){
    this->section = section;
  }
char getSection(){
    return section;
}
void setDOB(string DOB){
   this->DOB = DOB;
  }
string getDOB(){
    return DOB;
}
   void printStudent_Details(){
   cout<<"ID:"<<id<<"\n";
   cout<<"NAME:"<<name<<"\n";
   cout<<"DEPARTMENT:"<<department<<"\n";
   cout<<"SECTION:"<<section<<"\n";
   cout<<"DOB:"<<DOB<<"\n";
   cout<<"-----------------------------"<<"\n";
  }
  void AskPromotion(){
    if(id==1){
        cout<<"1:"<<name<<"\n";
    }
    else{
        cout<<"id=1:name is not match"<<"\n";
    }
  }
};
int main(){
  Student s = Student(1,"VICKY","CSE",'C',"05/12/2002");
  s.AskPromotion();
  Student s1 = Student(2,"LEO","CSE",'C',"02/09/2003");
  s1.AskPromotion();
}
