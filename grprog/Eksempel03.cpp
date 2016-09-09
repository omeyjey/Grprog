//
//  Eksempel03.cpp
//  grprog
//
//  Created by Morten Omholt-Jensen on 02/09/16.
//  Copyright © 2016 Morten Omholt-Jensen. All rights reserved.
//

#include "Eksempel03.hpp"
#include <iostream>
using namespace std;

int main() {
    int radie;
    float hoyde;
    float volum;
    const float PI = 3.14159F;
    
    cout << "Skriv radius: ";
    cin >> radie;
    
    cout << "Skriv hoyde: ";
    cin >> hoyde;
    
    volum = (PI * radie * radie) * hoyde;
    
    cout << "\n\n\tRadie:\tHoyde:\tVolum:\n";
    cout << '\t' << radie << '\t' << hoyde << '\t' << volum << '\n';
    return 0;
}
