//
//  Eksempel01.cpp
//  grprog
//
//  Created by Morten Omholt-Jensen on 02/09/16.
//  Copyright © 2016 Morten Omholt-Jensen. All rights reserved.
//

#include "Eksempel01.hpp"
#include <iostream>
using namespace std;

int main()
{
    int ftemp; // for temperature in fahrenheit
    
    cout << "Enter temperature in fahrenheit: ";
    cin >> ftemp;
    int ctemp = (ftemp-32) * 5/9;
    cout << "Equivalent in Celsius is : " << ctemp << '\n';
    return 0;
}