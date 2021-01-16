#include<iostream>
using namespace std;

int countinversion(int* arr, int n)
{
  int temp,count = 0;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]>arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        count++;
      }
    }
  }
  cout<<count<<"   ";
}





int main()
{
int arr[] = {2, 4, 1, 3, 5},n= sizeof(arr)/sizeof(arr[0]);
countinversion(arr,n);
}
