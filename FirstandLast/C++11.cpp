//
//  C++11.cpp
//  FirstandLast
//
//  Created by Santosh kumar Pattnaik on 05/11/19.
//  Copyright © 2019 Bunax. All rights reserved.
//

#include "C++11.hpp"
#include<iostream>
#include <memory>

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
    cout<<"The number entered is "<<num<<endl;
}

void Other()
{
    Cpp_11 *cp = new Cpp_11();
    cp->show();
    
    shared_ptr<Cpp_11> ptr = make_shared<Cpp_11>();
    ptr->show();
}
