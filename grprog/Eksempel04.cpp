//
//  Eksempel04.cpp
//  grprog
//
//  Created by Morten Omholt-Jensen on 02/09/16.
//  Copyright © 2016 Morten Omholt-Jensen. All rights reserved.
//

#include "Eksempel04.hpp"
#include <iostream>
using namespace std;

int main() {
    char tegn;
    
    cout << "Skriv in ett tegn: ";
    cin >> tegn;
    
    cout << "\nTegnet er: " << tegn << '\n';
    tegn = 'k';
    cout << "\nTegnet er: " << tegn << '\n';
    tegn = '\a';
    cout << "\nTegnet er: " << tegn << '\n';
    
    return 0;
}