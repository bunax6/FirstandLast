//
//  C++11.hpp
//  FirstandLast
//
//  Created by Santosh kumar Pattnaik on 05/11/19.
//  Copyright © 2019 Bunax. All rights reserved.
//

#ifndef C__11_hpp
#define C__11_hpp

#include <iostream>
#include <thread>

#include<memory>

class Cpp_11
{
private:
    int num;
public:
    Cpp_11();
    Cpp_11(int);
    Cpp_11(const Cpp_11&)=delete;
    Cpp_11& operator=(const Cpp_11&)=delete ;
    
    void show();
    
};

void Other();

#endif /* C__11_hpp */
