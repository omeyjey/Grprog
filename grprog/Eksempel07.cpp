//
//  Eksempel07.cpp
//  grprog
//
//  Created by Morten Omholt-Jensen on 02/09/16.
//  Copyright © 2016 Morten Omholt-Jensen. All rights reserved.
//

#include "Eksempel07.hpp"
#include <iostream>
using namespace std;

int main() {
    int ans = 27;
    
    ans += 10;
    cout << ans << ", ";
    ans -= 7;
    cout << ans << ", ";
    ans *= 2;
    cout << ans << ", ";
    ans /= 3;
    cout << ans << ", ";
    ans %= 3;
    cout << ans << endl;
    
    return 0;
    
}