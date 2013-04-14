#include <iostream>
using namespace std;

class Employee
{
private:
char name[20];
char addr[40];
char zip[10];
public:
Employee(char* n,char* a,char *z);
void ChangeName(char* n);
Display();
};

Employee::Employee(char* n,char* a,char* z)
{
int i;
for(i=0;i<=20;i++)
  name[i]=*(n+i);
for(i=0;i<=40;i++)
  addr[i]=*(a+i);
for(i=0;i<=10;i++)
  zip[i]=*(z+i);
}

void Employee::ChangeName(char* n)
{
int i;
for(i=0;i<=3;i++)
  name[i]=*(n+i);
}

Employee::Display()
{
for(i=0;i<=3;i++)
  cout<<name[i];
for(i=0;i<=10;i++)
  cout<<addr[i];
for(i=0;i<=6;i++)
  cout<<zip[i];
}

main()
{
Employee e1("张爱中“，”黄河南路 339 号“，”223800“);
e1.Display();
e1.ChangeName("张爱华”);
e1,Display();
return 0;
}
