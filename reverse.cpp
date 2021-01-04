#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string str;
    getline(cin,str);
    int count = 0;
    for(int i=0;str[i]!='\0';i++)
    {
      count++;
    }
    char temp;
    for(int i=0;i<=count/2;i++)
    {
      for(int j=count-1-i;j>=count/2;j--)
      {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        break;
      }
    }
    for(int i=0;i<=count;i++)
      cout<<str[i];

      cout<<endl;
return 0;
}
