#include<iostream>
using namespace std;
int main()
{
    char reverse[5];
    for(int i=0;i<=5;i++)
    {
        cin>>reverse[i];
    }
    for(int j=5;j>=0;j--)
    {
        cout<<reverse[j];
    }
    return 0;
}
