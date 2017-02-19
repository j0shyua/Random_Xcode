//
//  main.cpp
//  Reusing Functions
//
//  Created by Joshua Yu on 6/12/15.
//  Copyright (c) 2015 Joshua Yu. All rights reserved.
//

//#include <stdafx.h> // Visual Studio users must uncomment this line.
#include <iostream>

// getValueFromUser will read inputed value and return it to the caller
int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int a;
    std::cin >> a;
    return a;
}

int main()
{
    int x = getValueFromUser(); // First call to getValueFromUser
    int y = getValueFromUser(); // Second call to getValueFromUser
    
    std::cout << x << " + " << y << " = " << x + y << std::endl;
    
    return 0;
}