#include<iostream>
#include<string.h>
using namespace std;

int main()
{

  string name;
  getline(cin,name);
  int size = name.length();

  for(int i=size;i>=0;i--)
  {
    cout<<name[i];
  }
  return 0;
}
