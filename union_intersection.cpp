#include<iostream>
using namespace std;

int sort(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";

        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";

        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }

    /* Print remaining elements of the larger array */
    while (i < m)
        cout<< arr1[i++] << " ";

    while (j < n)
        cout << arr2[j++] << " ";
}

int Intersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* if arr1[i] == arr2[j] */
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
  int arr1[] = {11,19,20,22,26,30} ,arr2[] = {10,11,20,22,27,35},temp;
  int m = sizeof(arr1)/sizeof(arr1[0]) ;
  int n = sizeof(arr2)/sizeof(arr2[0]) ;
  cout<<"Union of the following array is : ";
  sort(arr1,arr2,m,n);
  cout<<endl<<"Intersection of the following array is : ";
  Intersection(arr1,arr2,m,n);

  return 0;
}
