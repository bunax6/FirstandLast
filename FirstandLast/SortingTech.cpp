//
//  SortingTech.cpp
//  FirstandLast
//
//  Created by Santosh kumar Pattnaik on 07/11/19.
//  Copyright © 2019 Bunax. All rights reserved.
//

#include "SortingTech.hpp"


void BubbleSort(int arr[],int n)
{
    int i;
    int j;
    int temp;
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void SortShow(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

void InsertionSort(int arr[],int n)
{
    int i, j, x;
    
    for(i=1;i<n;i++)
    {
        j = i-1;
        x = arr[i];
        
        while(j> -1 && arr[j]> x)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]= x;
    }
}
