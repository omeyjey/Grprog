//
//  Eksempel05.cpp
//  grprog
//
//  Created by Morten Omholt-Jensen on 02/09/16.
//  Copyright © 2016 Morten Omholt-Jensen. All rights reserved.
//

#include "Eksempel05.hpp"
#include <iostream>
using namespace std;

int main() {
    int pop1=2425785, pop2=47, pop3=9761;
    
    cout << "LOCATION " << "POP." << endl
         << "Portcity " << pop1 << endl
         << "Hightown " << pop2 << endl
         << "Lowville " << pop3 << endl;
    return 0;
}

// Kunne ha skrevet:
// setw(8) bruk 8 posisjoner på å skrive (population)
/*
#include <iostream>
#include <iomanip> // for setw
using namespace std;
int main()
{
    long pop1=2425785, pop2=47, pop3=9761;
    cout << setw(8) << “LOCATION” << setw(12)
    << “POPULATION” << endl
    << setw(8) << “Portcity” << setw(12) << pop1 << endl
    << setw(8) << “Hightown” << setw(12) << pop2 << endl
    << setw(8) << “Lowville” << setw(12) << pop3 << endl;
    return 0;
}
*/