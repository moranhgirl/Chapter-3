#include <iostream>
using namespace std;

class Test
{
private:
int a,b,sum;
public:
void initx(int x,int y);
void printx();
};

void Test::initx(int x,int y)
{
a=x;
b=y;
sum=a-b;
}

void Test::printx()
{
cout<<a<<'-'<<b'='<<sum;
}

main()
{
Test x;
x,initx(300,200);
x.printx();
return 0;
}
