#include<iostream>
using namespace std;

void sort(int* arr, int n)
{
	int count0=0,count1=0,count2=0;
	for(int i = 0;i<n;i++)
	{
		if(arr[i]==0)
		count0++;
		else if(arr[i]==1)
		count1++;
		else
		count2++;
	}
	for(int j=0;j < count0;j++)
			arr[j]=0;

	for(int j=count0;j < (count0+count1);j++)
			arr[j]=1;

	for(int j=(count0+count1);j< n;j++)
			arr[j]=2;
//--------------------------------------
return;
}


int main()
{
int arr[]={1,0,1,2,1,2,1,2,1,0,0,0,2,2};
int n = sizeof(arr)/sizeof(arr[0]) ;

sort(arr,n);

for(int i=0;i<n;i++)
{
	cout<<arr[i]<<"   ";
}
cout<<endl;
return 0;
}
