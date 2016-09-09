//
//  Eksempel06.cpp
//  grprog
//
//  Created by Morten Omholt-Jensen on 02/09/16.
//  Copyright © 2016 Morten Omholt-Jensen. All rights reserved.
//

#include "Eksempel06.hpp"
#include <iostream>
using namespace std;

int main() {
    int count = 7;
    float avgWeight = 155.5F;
    float totalWeight = count * avgWeight;
    cout << "totalWeight=" << totalWeight << endl;
    return 0;
}