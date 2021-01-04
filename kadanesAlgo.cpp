#include<iostream>
using namespace std;

int largestsum(int* arr, int n)
{
  int max_ending = 0,max_so_far = 0;
  for(int i=0;i<n;i++)
  {
    max_ending = max_ending + arr[i];
    if(max_ending < 0)
      max_ending = 0;
    else
    {
      if(max_so_far < max_ending)
        max_so_far = max_ending;
    }
  }
  return (max_so_far);

}


// main function
int main()
{
  //initializing the array
  int arr[]={-2,-3,4,-1,-2,1,5,-3};
  //getting the size of the array
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<largestsum(arr,n);
}
