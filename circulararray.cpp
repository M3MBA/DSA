#include<iostream>
using namespace std;

int rotate(int* arr,int n)
{
  int temp,i=0;
  temp = arr[n-1];
  for(int j=n-2;j>=0;j--)
    {
      arr[j+1]=arr[j];
    }
    arr[0] = temp;
for(int k=0;k<n;k++)
{
  cout<<arr[k]<<"  ";
}
cout<<endl;
}

int main()
{
  int arr[] = {1,2,3,2,4,5} , n = sizeof(arr)/sizeof(arr[0]);
  rotate(arr,n);
}
