//
//  main.cpp
//  First Project
//
//  Created by Joshua Yu on 6/11/15.
//  Copyright (c) 2015 Joshua Yu. All rights reserved.
//

// #include "stdafx.h" // Visual Studio users must uncomment this line.
#include <iostream>

int main()
{
    //Ask user for number.
    std::cout << "Enter a number: ";
    
    int x = 0;
   
    //Read # from console and store in x.
    std::cin >> x;
    std::cout << "You entered " << x << "." << std::endl;
    return 0;
}
