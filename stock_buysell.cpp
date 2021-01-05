#include<iostream>
using namespace std;

int buysell(int* arr,int n)
{
  int profit,max_profit=0;
  for(int i=0;i<n-1;i++)
  {
    if(arr[i]<arr[i+1])
    {
      profit = arr[i+1] - arr[i];
      if(profit>max_profit)
      {
        max_profit = profit;
      }

    }

  }
    cout<<max_profit<<endl;
}


int main(){
  int arr[] = {22,11,14,25}, n = sizeof(arr)/sizeof(arr[0]) ;
  buysell(arr,n);
}
