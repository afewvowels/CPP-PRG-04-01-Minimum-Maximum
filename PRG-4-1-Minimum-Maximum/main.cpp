//
//  main.cpp
//  PRG-4-1-Minimum-Maximum
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that asks the user to enter two numbers. The program should use the
//  conditional operator to determine which number is the smaller and which is the larger.


#include <iostream>

using namespace std;

int main()
{
    int intNumber1,
        intNumber2;
    
    cout << "Please enter an integer number: \n";
    cin >> intNumber1;
    
    cout << "Please enter another integer number: \n";
    cin >> intNumber2;
    
    if (intNumber1 > intNumber2)
    {
        cout << intNumber1 << " is greather than " << intNumber2;
    }
    else if (intNumber1 < intNumber2)
    {
        cout << intNumber2 << " is greater than " << intNumber1;
    }
    else if (intNumber1 == intNumber2)
    {
        cout << intNumber1 << " is equal to " << intNumber2;
    }
    else
    {
        cout << "ERROR COMPARING INTNUMBER1 AND INTNUMBER2"; 
    }
    
    return 0;
}





