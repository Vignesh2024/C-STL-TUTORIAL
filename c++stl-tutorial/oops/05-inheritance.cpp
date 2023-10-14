#include<bits/stdc++.h>
using namespace std;

class Student{
  private:
  int id;
  string name;
  string department;
  char section;
  protected:
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
  void testing(){
    cout<<"Testing class 1"<<"\n";
  }
};
class NewStudents: public Student{
    public:
    int mark;
    NewStudents(int id,string name,string department,char section,string DOB,int mark):
    Student(id,name,department,section,DOB){
      this->mark = mark;
    }
    void printNewStudents(){
        cout<<"Name:"<<getName()<<"\n";
        cout<<"Department:"<<getDepartment()<<"\n";
        cout<<"Section:"<<getSection()<<"\n";
        cout<<"DOB:"<<DOB<<"\n";
        cout<<"Marks:"<<mark<<"\n";
    }
    void testing(){
        cout<<"testing 2"<<"\n";
    }
};
int main(){
   NewStudents ns = NewStudents(1,"vicky","cse",'B',"05/12/2002",450);
   //NewStudents ns1 = NewStudents(2,"leo","cse",'B',"30/12/2002",420);
   Student* s = &ns;
   //Student* s1 = &ns1;
   s->testing();
   //s1->testing();
}
