//
//  Eksempel02.cpp
//  grprog
//
//  Created by Morten Omholt-Jensen on 02/09/16.
//  Copyright © 2016 Morten Omholt-Jensen. All rights reserved.
//

#include "Eksempel02.hpp"
#include <iostream>
using namespace std;

int main()
{
    float rad;                              // Variable of type float
    const float PI = 3.14159F;              // Type const float
    
    cout << "Enter radius of circle: ";     // promt
    cin >> rad;                             // Get radius
    
    float area = PI * rad * rad;            // Find area
    cout << "Area is " << area << endl;     // Display answer
    return 0;
}