//
//  C++11.cpp
//  FirstandLast
//
//  Created by Santosh kumar Pattnaik on 05/11/19.
//  Copyright © 2019 Bunax. All rights reserved.
//

#include "C++11.hpp"
#include<iostream>

using namespace std;



Cpp_11::Cpp_11()
{
    cout<<"Default Constructor"<<endl;
}

Cpp_11::Cpp_11(int n)
{
    num = n;
}

void Cpp_11::show()
{
    cout<<"The number entered is "<<num<<endl;;
}
