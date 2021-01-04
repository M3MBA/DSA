#include<iostream>
using namespace std;

void sort(int* arr,int n)
{
  int temp,i,j;
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(arr[i]>arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  return;
}



int main()
{
int arr[]={1,2,-2,3,-4,-5,3,2,-9,6,-8,9,-10,-2,-5,4,6},i;
int n = sizeof(arr)/sizeof(arr[0]) ;
sort(arr,n);
for(i=0;i<n;i++)
  cout<<arr[i]<<", ";
return 0;
}
