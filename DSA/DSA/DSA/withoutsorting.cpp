//
//  withoutsorting.cpp
//  DSA
//
//  Created by Rahul Arya on 29/12/20.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int array[13]{1,2,1,1,1,1,0,0,0,0,2,2,2};
    int temp ;
    for(int i =0; i<sizeof(array);i++)
        {
            for(int j=i+1;j<sizeof(array);j++)
            {
                if(array[j]>array[i])
                {
                    temp = array [i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }

        }
    for (int i=0;i<sizeof(array);i++)
    {
        cout<<array[i]<<"\t";
    }
}
