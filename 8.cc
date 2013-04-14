#include <iostream>
using namespace std;

class Student
{
int english,computer,total;
pubilc:
void getscore();
void display();
void sort(Student *);
~Student();
};

void Stduent::getscore()
{
cin<<english<<computer<<total;
}

void Student::display()
{
cout<<"english"<<english<<'\n'
    <<"computer"<<computer<<'\n'
    <<"total"<<total<<'\n';
}

void Student::sort(Student *)
{
Student *n;
int i;
for(j=2;j>=0;j--)
  for(i=1;i<=j+1;i++)
    if(*n<*(n+i)) *n=*(n+i);
}

main()
{
Student s1,s2.s3;
s1.getscore();
s2.getscore();
s3.getscore();
Student *p=s1;
p.sort(p);
s1.display();
s2.display();
s3.display();
}
