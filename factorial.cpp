#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cin>>a;
  for(int j=0;j<a;j++)
  {
      cin>>b;
  long mul=1;
  for(int i=1;i<=b;i++)
  {
    mul = mul * i;
  }
  cout<<mul<<endl;
  }
}
