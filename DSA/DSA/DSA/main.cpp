//  main.cpp
//  DSA
//
//  Created by Rahul Arya on 29/12/20.
//

#include<iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int array[]{2,1,6,3,7,2,7,4,7,8,12,4,23,5},temp,k;
    cout<<"enter kth max n min : ";
    cin>>k;
    
    for(int i = 0; i<14; i++) {
        for(int j = i+1; j<14; j++)
        {
           if(array[j] < array[i]) {
              temp = array[i];
              array[i] = array[j];
              array[j] = temp;
           }
        }
     }
     cout <<"Sorted Element List ...\n";
     for(int i = 0; i<14; i++)
    {
   
         {
             if(i==k-1)
             cout <<array[i]<<"\t";
             
        }
    }
    cout<<endl;
    for(int j = 13;j >= 0;j--)
    {
        if(j==14-k)
        cout<<array[j]<<"\t";
        
    }
    
    return 0;
}
