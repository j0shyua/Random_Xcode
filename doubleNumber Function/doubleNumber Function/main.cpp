//
//  main.cpp
//  doubleNumber Function
//
//  Created by Joshua Yu on 6/17/15.
//  Copyright (c) 2015 Joshua Yu. All rights reserved.
//

#include <iostream>

int doubleNumber (int x)
{
    return 2 * x;
}

int main()
{
    
    //Gets rid of the need to put "std::" in front of everything.
    using namespace std;
    
    int inputNumber;

   
    //Ask user for a number.
    cout << "Insert a number: ";
    cin >> inputNumber;

    int newNumber = doubleNumber(inputNumber);
    
    //Output the doubled number.
    cout << endl << "The doubled number is " << newNumber;
    
    return 0;
}
