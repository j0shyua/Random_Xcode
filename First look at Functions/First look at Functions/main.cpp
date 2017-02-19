//
//  main.cpp
//  First look at Functions
//
//  Created by Joshua Yu on 6/12/15.
//  Copyright (c) 2015 Joshua Yu. All rights reserved.
//

#include <iostream>

// void means the function does not return a value to the caller
void returnNothing()
{
    // This function does not return a value so no return statement is needed
}

// int means the function returns an integer value to the caller
int return5()
{
    return 5; // this function returns an integer, so a return statement is needed
}

int getAge(void)
{
    int inputAge;
    std::cout << "what is your age?";
    std::cin >> inputAge;
    
    return inputAge;
}

int main()
{
    std::cout << return5(); // prints 5
    std::cout << return5()  + 2 << std::endl; // prints 7
   // std::cout << returnNothing(); // This line will not compile.  You'll need to comment it out to continue.
    
    int age = getAge();
    std::cout << "your age is " << age;
    returnNothing(); // okay: function returnNothing() is called, no value is returned
    return5(); // okay: function return5() is called, return value is discarded
}