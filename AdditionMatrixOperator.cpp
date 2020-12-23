#include<iostream>
using namespace std;

class Matrix
{
 private:

 int x[3][3];

 public:

 void getMat()
 {
  int i,j,n;
  n=n+1;
  cout<<"Enter Matrix "<<n<<":";
  
  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    {
      cin>>x[i][j];
    }
  }
 }

 void putMat()
 {
  int i,j;

  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    {
      cout<<x[i][j];
      cout<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
 }

 Matrix operator+(Matrix);
};

 Matrix Matrix::operator+(Matrix R)
{
  int i,j;
  Matrix M;
  for(i=0;i<=2;i++)
  {
   for(j=0;j<=2;j++)
   {
     M.x[i][j]=x[i][j]+R.x[i][j];
   }
  }
  return(M);
}

int main()
{
 Matrix m1,m2,m3;
 cout<<"                                       //// MATRIX ADDITION TOOL ////"<<endl;
 cout<<"Press Enter After Entering each value"<<endl;
 m1.getMat();
 m1.putMat();
 m2.getMat();
 m2.putMat();
 m3=m1+m2;
 m3.putMat();
 cout<<"Thank You For Using It"<<endl;
 return(0);
}
