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
    return 0;
}
