//
//  C++98.hpp
//  FirstandLast
//
//  Created by Santosh kumar Pattnaik on 09/11/19.
//  Copyright © 2019 Bunax. All rights reserved.
//

#ifndef C__98_hpp
#define C__98_hpp

#include <iostream>
using namespace std;

class Cpp98
{
private:
    int iold;
public:
    Cpp98();
    Cpp98(int);
    Cpp98(const Cpp98 &);
    void operator=(const Cpp98 &);
    void Cpp98Display();
};

#endif /* C__98_hpp */
