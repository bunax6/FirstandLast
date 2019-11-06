//
//  C++STL.hpp
//  FirstandLast
//
//  Created by Santosh kumar Pattnaik on 06/11/19.
//  Copyright © 2019 Bunax. All rights reserved.
//

#ifndef C__STL_hpp
#define C__STL_hpp

#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Cpp_STL
{
private:
    vector<int> v;
    list<int> l;
public:
    Cpp_STL();
    Cpp_STL(int);
    void vectordisplay();
    void listdisplay();
};

#endif /* C__STL_hpp */
