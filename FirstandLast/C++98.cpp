//
//  C++98.cpp
//  FirstandLast
//
//  Created by Santosh kumar Pattnaik on 09/11/19.
//  Copyright © 2019 Bunax. All rights reserved.
//

#include "C++98.hpp"

Cpp98::Cpp98()
{
    iold = 0;
}

Cpp98::Cpp98(int i_old)
{
    iold = i_old;
}

Cpp98::Cpp98(const Cpp98 &ref)
{
    iold = ref.iold;
}

void Cpp98::operator=(const Cpp98 &ref)
{
    iold = ref.iold;
}


void Cpp98::Cpp98Display()
{
    cout<<"Displayed from Cpp98"<<endl;
}
