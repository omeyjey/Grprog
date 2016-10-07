// Morten Omholt-Jensen, obligg 3.

// Programmet skal gjøre det mulig for brukren å skrive inn tre forskjellige
// brøker og videre, velge en av fire opperasjoner på brøkene valgt.
// Programmet skal da regne ut mattestykket til brukren og skrive det ut.
// Når det er ferdig kjører det om igjen fra der brukeren kan velge brøker fram
// til brukeren skriver inn 'q' og avslutter programmet.


#include <iostream>
#include <iomanip>

using namespace std;

struct fractions                            // Struct om en brøk
{
    int numerator;                          // Innholder teller og nevner
    int denomerator;
};

int main()
{
    fractions fraction1,                    // Lager nye structer med variabler
    fraction2,
    fraction3,
    temp,                                   // Lager variabler temp1, 2, 3
    temp1,
    temp2;

    char svar;                              // Starte om igjen eller 'q' for
    char opperasjon;                        // avslutte og hvilken opperasjon
                                            // brukeren vil bruke.
    
    do                                      // Løkker som ber brukeren skrive
    {                                       // inn teller og nevner for 3 brøker
        cout << "Brøk nr 1 (teller nevner): ";
        cin >> fraction1.numerator >> fraction1.denomerator;
        
    } while (fraction1.denomerator <= 0);
    
    do
    {
        cout << "Brøk nr 2 (teller nevner): ";
        cin >> fraction2.numerator >> fraction2.denomerator;
        
    } while (fraction2.denomerator <= 0);
    
    do
    {
        cout << "Brøk nr 3 (teller nevner): ";
        cin >> fraction3.numerator >> fraction3.denomerator;
        
    } while (fraction3.denomerator <= 0);
    
    
    cout << endl;
    
    
    do                                      // Løkke som kjører resten av
    {                                       // Programmet
        do                                  // Løkke som ber brukeren velge brøk
        {
            cout << "Hvilke brøker vil du utføre opperasjoner på?" << endl;
            cout << "a: Brøk nr 1 og 2" << endl;
            cout << "b: Brøk nr 1 og 3" << endl;
            cout << "c: Brøk nr 2 og 3" << endl;
            
            cout << "Skriv inn a, b, eller c utifra valgene over "
                 << "eller q for å avslutte: ";
            cin >> svar;                    // Brukerens svar
            
        } while (svar != 'a' && svar != 'b' && svar != 'c' && svar != 'q');
        
        if (svar == 'a')                    // Gjør om temp1 og 2 til brukerens
        {                                   // valgte brøker
            temp1.numerator = fraction1.numerator;
            temp1.denomerator = fraction1.denomerator;
            
            temp2.numerator = fraction2.numerator;
            temp2.denomerator = fraction3.denomerator;
            
        } else if (svar == 'b')
        {
            temp1.numerator = fraction1.numerator;
            temp1.denomerator = fraction1.denomerator;
            
            temp2.numerator = fraction3.numerator;
            temp2.denomerator = fraction3.denomerator;
            
        } else if (svar == 'c')
        {
            temp1.numerator = fraction2.numerator;
            temp1.denomerator = fraction2.denomerator;
            
            temp2.numerator = fraction3.numerator;
            temp2.denomerator = fraction3.denomerator;
        } else if(svar == 'q')
        {
            cout << " ";
        }
        
        do                                      // Henter inn brukrens valg av
        {                                       // opperasjon på brøkene.
            if (svar != 'q')
            {
                cout << "Velg en opperasjon på"
                     << "brøkene du har valgt (+ - * /): ";
                cin >> opperasjon;
            }
            
        } while(opperasjon != '+' && opperasjon != '-' && opperasjon != '*' &&
                opperasjon != '/' && svar != 'q');
        
        if (opperasjon == '+' && svar != 'q')   // Regner ut og printer ut
        {                                       // brukerens brøker og svar
            temp.numerator = (temp1.numerator * // Setter temp lik brukerens
                            temp2.denomerator) +// svar.
                            (temp1.denomerator *
                             temp2.numerator);
            temp.denomerator = (temp1.denomerator *
                                temp2.denomerator);
            
            cout << setw(3) << temp1.numerator;
            cout << setw(9) << temp2.numerator << endl;
            cout << " ---  +  ----" << endl;
            cout << setw(3) << temp1.denomerator << "        ";
            cout << temp2.denomerator << endl;
            cout << endl;
            cout << "=" << setw(4) << temp.numerator << endl;
            cout << setw(6) << "----" << endl;
            cout << setw(6) << temp.denomerator << endl;
            
            cout << endl;
            cout << endl;
            
        } else if (opperasjon == '-' && svar != 'q') // Gjør det samme for alle
        {                                            // opperasjonene.
            temp.numerator = (temp1.numerator * temp2.denomerator) -
            (temp1.denomerator * temp2.numerator);
            
            temp.denomerator = (temp1.denomerator * temp2.denomerator);
            
            cout << setw(3) << temp1.numerator;
            cout << setw(9) << temp2.numerator << endl;
            cout << " ---  -  ----" << endl;
            cout << setw(3) << temp1.denomerator << "        ";
            cout << temp2.denomerator << endl;
            cout << endl;
            cout << "=" << setw(4) << temp.numerator << endl;
            cout << setw(6) << "----" << endl;
            cout << setw(6) << temp.denomerator << endl;
            
            cout << endl;
            cout << endl;
            
        } else if (opperasjon == '*' && svar != 'q')    // Multplikasjon
        {
            temp.numerator = (temp1.numerator * temp2.numerator);
            temp.denomerator = (temp1.denomerator * temp2.denomerator);
            
            cout << setw(3) << temp1.numerator;
            cout << setw(9) << temp2.numerator << endl;
            cout << " ---  *  ----" << endl;
            cout << setw(3) << temp1.denomerator << "        ";
            cout << temp2.denomerator << endl;
            cout << endl;
            cout << "=" << setw(4) << temp.numerator << endl;
            cout << setw(6) << "----" << endl; 
            cout << setw(6) << temp.denomerator << endl; 
            
            cout << endl;
            cout << endl;
            
        } else if (opperasjon == '/' && svar != 'q')    // Divisjon
        {
            temp.numerator = (temp1.numerator * temp2.denomerator);
            temp.denomerator = (temp1.denomerator * temp2.numerator);
            
            cout << setw(4) << temp1.numerator;
            cout << setw(8) << temp2.numerator << endl;
            cout << " ---  /  ----" << endl; 
            cout << setw(3) << temp1.denomerator << "        ";
            cout << temp2.denomerator << endl;
            cout << endl;
            cout << "=" << setw(4) << temp.numerator << endl;
            cout << setw(6) << "----" << endl; 
            cout << setw(5) << temp.denomerator << endl; 
            
            cout << endl;
            cout << endl;
            
        }
        
    } while (svar != 'q');                      // Løkken kjører hvis brukeren
                                                // ikke har skrevet inn 'q'
    cout << endl;                               // Avslutter programmet med en
    cout << endl;                               // hyggelig melding.
    cout << "*****************" << endl;
    cout << "Avslutter program" << endl;
    cout << "  Ha en fin dag!"  << endl;	
    cout << "*****************" << endl;
    
    
    return 0;
}
