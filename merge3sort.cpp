#include<iostream>
using namespace std;

int sort(int* arr1,int* arr2,int* arr3,int n,int m,int o)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(arr1[i] == arr2[j])
      {
        for(int k=0;k<o;k++)
        {
          if(arr2[j]==arr3[k])
          cout<<arr1[i]<<"  ";
        }
      }
    }
  }
}


int main()
{
  int arr1[] = {1, 5, 10, 20, 40,34, 80},arr2[] = {6, 7, 20, 80, 100},arr3[] = {3, 4, 15, 20, 80, 120};
  int n = sizeof(arr1)/sizeof(arr1[0]);
  int m = sizeof(arr2)/sizeof(arr2[0]);
  int o = sizeof(arr3)/sizeof(arr3[0]);
  sort(arr1,arr2,arr3,n,m,o);
}
