
#include <iostream>
#define M 2
#define N 3
using namespace std;

class Matrix
{
  private:
  int a[M][N];
  public:
  Matrix();
  Matrix(int x[M][N]);
  Matrix operator +(Matrix &b);
  void operator =(Matrix &b);
  void show();
};

Matrix::Matrix()
{
  int i,j;
  for(i=0;i<=M;i++)
    for(j=0;j<=N;j++)
      a[i][j]=0;
}

Matrix::Matrix(int x[M][N])
{
int i,j;
for(i=0;i<=M;i++)
  for(j=0;j<=N;j++)
    a[i][j]=x[i][j];
}

Matrix Matrix::operator +(Matrix &b)
{
Martix c;
int i,j;
for(i=0;i<=M;i++)
  for(j=0;j<=N;j++)
    c.a[i][j]=a[i][j]+b.a[i][j];
return c;
}

void Matrix::operator =(Matrix &b)
{
Matrix n;
int i,j;
for(i=0;i<=M;i++)
  for(j=0;j<=N;j++)
    n.a[i][j]=b.a[i][j];
}

void show()
{
int i,j;
for(i=0;i<=M;i++)
  for(j=0;j<=N;j++) 
    cout<<C.a[i][j];
  cout<<'\n';
}

int main()
{
int z[2][3]={1,2,3,4,5,6};
int y[3]={2,2,2,3,3,3};
Matrix C;
Matrix A(z),B(y);
cout<<"A:";
A.show();
cout<<"b:"
B.show();
C=A+B;
cout<<"A+B:";
C.show;
return 0;
}
