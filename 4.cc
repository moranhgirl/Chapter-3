#include <iostream>
#define M 2
#define N 3

class Matrix
{
  private:
  int a[M][N];
  public:
  Matrix();
  Matrix(int x[M][N]);
  Matrix operator+(Matrix &b);
  void operator=(Matrix &b);
  void show();
};

Matrix::Matrix(int x[M][N])
{
int i,j;
for(i=0;i<=M;i++)
  for(j=0;j<=N;j++)
    a[i][j]=x[i][j];
}

Matrix::operator+(Matrix &b)
{
int i,j;
return for(i=0;i<=M;i++)
         A.*(b+i)+B.*(b+1);
}

void Matrix::operator=(Matrix &b)
{
int i,j;
return C.a[i][j]=operator+(&b);
}

void show()
{
int i,j;
for(i=0;i<=M;i++)
  for(j=0;j<=N;j++) 
    cout<<C.a[i][j];
  cout<<'\n';
}

main()
{
int x[2][3]={0};
int z[3]={1.2.3};
int y[3]={3,4,5);
int m[3]={0};
Matrix C(x);
int* o=&z;
int* e=&y;
int* r=&n;
Matrix A.B;
A.operator+(o);
B.operator+(e);
C.operator=(n);
C.show();
return 0;
}
