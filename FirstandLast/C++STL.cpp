//
//  C++STL.cpp
//  FirstandLast
//
//  Created by Santosh kumar Pattnaik on 06/11/19.
//  Copyright © 2019 Bunax. All rights reserved.
//

#include "C++STL.hpp"
#include <iostream>
#include <vector>
#include <list>


Cpp_STL::Cpp_STL()
{
    v = {0};
}

Cpp_STL::Cpp_STL(int num)
{
    int i;
    for(i=0;i<num;i++)
    {
    v.push_back(i);
    l.push_back(i);
    }
}
    

void Cpp_STL::vectordisplay()
{
    vector<int> ::iterator itr;
    for(itr = v.begin();itr!=v.end();itr++)
        cout<<*itr<<endl;
}

void Cpp_STL::listdisplay()
{
    for(auto &x: l)
        cout<<x<<endl;
}
