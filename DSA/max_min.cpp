//
//  max_min.cpp
//  First
//
//  Created by Rahul Arya on 28/12/20.
//
#include<iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int range[5],max=0,min=0;
    for (int i=0;i<5;i++)
    {
        cin>>range[i];
    }
    max = range[0];
    min = max;
    for (int i=0;i<5;i++)
    {
        if(max<range[i])
            max = range[i];
    }
    for(int i=0;i<5;i++)
    {
        if(min>range[i])
            min = range[i];
    }
    cout<<"maximum number is "<<max<<"\nand minimum number is "<<min<<"\n";
    return 0;
}
