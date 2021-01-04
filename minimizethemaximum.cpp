#include<iostream>
using namespace std;

int minimize_the_maximum(int* arr, int n)
{
  int min=arr[0],max=arr[0];
  for(int i=0;i<n;i++)
  {
    /*first we find the maximum no. in the array and then the minimum no.
    then we subtract both in order to find minimizing the maximum in the array*/
    if(arr[i]>=max)
      max = arr[i];
    else if(arr[i]<=min)
      min = arr[i];
  }
  return(max-min);
}



int main()
{
  int arr[]={1,2,4,2,5,7,8}, n =sizeof(arr)/sizeof(arr[0]);

  cout<<minimize_the_maximum(arr,n)<<endl;

}
