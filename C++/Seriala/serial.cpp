/*

Information:
              Creator: Ekain Garmendia
              Date: 15/10/2010
              Lines: 40
              Difficulty level: Very easy
              Additional info: The serial number is only from 0 to 1000.

*/

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <math.h>
using namespace std;

int serial;
int your_number;

int main()
{

    
    srand(time(NULL));
    
    serial = (rand() % 1000) + 0; //Generates a random number from 0 to 1000
    
    cout << "Enter your serial number: ";
    cin >> your_number;
    if (your_number == serial)
    {
           cout << "Thanks for purchasing our product.";
           _getch();
           return 0;
    } else {
           return main();
    }
}
