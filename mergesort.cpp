#include<iostream>
using namespace std;

int mergesort(int* arr1,int* arr2,int n,int m)
{
  int temp[n+m],exchange;
  for(int i=0;i<n;i++)
  {
    temp[i]=arr1[i];
    temp[i+n]=arr2[i];
  }
  for(int i=0;i<n+m;i++)
  {
    for(int j=1+i;j<n+m;j++)
    {
      if(temp[i]>temp[j])
      {
        exchange = temp[i];
        temp[i] = temp[j];
        temp[j] = exchange;
      }
    }
    cout<<temp[i]<<" ";
  }

}

int main()
{
  int arr1[]={1,3,5}, arr2[]={2,4,6},n=sizeof(arr1)/sizeof(arr2[0]),m=sizeof(arr2)/sizeof(arr2[0]);
  mergesort(arr1,arr2,n,m);
}
