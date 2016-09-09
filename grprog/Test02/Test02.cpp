//
//  Test02.cpp
//  grprog
//
//  Created by Morten Omholt-Jensen on 01/09/16.
//  Copyright © 2016 Morten Omholt-Jensen. All rights reserved.
//

#include "Test02.hpp"
#include <iostream>
using namespace std;

int main()
{
    int M = 2^8;
    int a = 113;
    int c = 37;
    int X = 10;
    int i;
    for(i=0; i<8; i++)
    {
        X = (a * X + c) % M;
        cout << X << " ";
    }
    return 0;
}