//
//  main.cpp
//  FirstandLast
//
//  Created by Santosh kumar Pattnaik on 05/11/19.
//  Copyright © 2019 Bunax. All rights reserved.
//

#include <iostream>
#include "General.h"
#include "C++11.hpp"
#include "C++STL.hpp"
#include "SortingTech.hpp"



int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    General(); //General has been called here
    Cpp_11 c(100);
    c.show();
    Other();
    Cpp_STL vt(10);
    vt.vectordisplay();
    cout<<"Vector display end here"<<endl;
    vt.listdisplay();
    cout<<"List display end here"<<endl;
    
    cout<<"Sorting Technic below"<<endl;
    int arr[] = { 10,1,34,56,2,12};
    cout<<"Bubblesort"<<endl;
    BubbleSort(arr, 6);
    SortShow(arr,6);
    
    cout<<"\nInsertion sort"<<endl;
    
    InsertionSort(arr, 6);
    SortShow(arr,6);
    cout<<endl;
    
    cout<<"\nSelection sort"<<endl;
    selectionSort(arr,6);
    SortShow(arr,6);
    cout<<endl;
    
    
    
    return 0;
}
