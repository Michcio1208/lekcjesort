#include <iostream>

using namespace std;

int main()
{
 /* int t[6]={1,3,5,7,9,11};  //zamiana elem
  int temp;
  for(int i=0;i<6;i++)
    cout<<t[i]<<endl;
  for(int i=0;i<6/2;i++)
  {
      temp=t[i];
      t[i]=t[6-1-i];
      t[6-1-i]=temp;
  }
   for(int i=0;i<6;i++)
    cout<<t[i]<<endl;

  //  int t[ 8 wierszy][3 kolumny]={24 elem};


    int t[3][2]={1,2,3,4,5,6};
    cout<<t[0][0]<<endl;
    cout<<t[0][1]<<endl;
cout<<t[1][0]<<endl;
cout<<t[1][1]<<endl;
cout<<t[2][0]<<endl;
cout<<t[2][1]<<endl;



int t[5][6];
for(int i=0;i<5;i++)
{
    for(int j=0;j<6;j++)
    {
        t[i][j]=i+j;
    }


}
  for(int i=0;i<5;i++)
  {
      for(int j=0;j<6;j++)
      {
          cout<<t[i][j]<<" | ";
      }
      cout<<endl;
  }


*/
int t[2][10]={1,2,3,4,5,6,7,8,9,10};


    for(int j=0;j<10;j++)
    {
        swap(t[0][j], t[1][j]);
    }



  for(int i=0;i<2;i++)
  {
      for(int j=0;j<10;j++)
      {
          cout<<t[i][j]<<" | ";
      }
      cout<<endl;
  }






}
