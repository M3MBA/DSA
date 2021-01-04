#include<iostream>
using namespace std;

int repeat(int* arr,int n)
{
  int temp = 0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(arr[i]==arr[j])
        {
          temp = arr[i];
          break;
        }
    }
  }
  return temp;
}


int main()
{
  int arr[]={1,2,3,4,5,6,7,9,8,4},n = sizeof(arr)/sizeof(arr[0]) ;

  cout<<repeat(arr,n);

}
