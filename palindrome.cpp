#include <iostream>
#include <string>
using namespace std;

int main()
{

  char name[100];
  cin>>name;
  int flag = 0, size = strlen(name);
  for(int i=0; i<size/2;i++)
  {
    if(name[i]!=name[size-i-1])
      flag = 1;
    else break;

  }
  if (flag)
    cout<<"Not a palindrome ";
  else cout<<"Palindome " ;
return 0;
}
