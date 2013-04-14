#include <iostream>
#define M 3;
#define N 4;
using namespace std;

class REVARR
{
private:
int a[M][N];
public:
REVARR(int x[M][N];
void reverse();
void show();
};

REVARR::REVARR(int x[M][N])
{
int i,j;
for(i=0;i<=M;i++)
  for(j=0;j<=N;j++)
    a[i][j]=x[i][j];
}

void REVARR::reverse()
{
int i,j;
for(i=0;i<=M;i++)
  for(j=0;j<=N;j++)
    a[M-1-i][N-1-j]=a[i][j];
}

void REVARR::show()
{
int i,j;
for(i=0;i<=M;i++)
  for(j=0;j<=N;j++)
    cout<<a[i][j];
  cout<<'\n';
}

main()
{
int data[M][N]={1,3,2,4,,5,6,8,7,9,10,12,11};
REVARR a(data);
a,show();
a.reverse();
a.show();
}
