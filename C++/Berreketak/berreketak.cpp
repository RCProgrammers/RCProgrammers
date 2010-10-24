/*

Information:
              Creator: Ekain Garmendia
              Date: 18/10/2010
              Lines: 54
              Difficulty level: Not so easy if you think carefully

*/

#include <iostream>                                //The libraries you need
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
         system("color 0A");                        //Puts color to our console window
         
         unsigned long long int n, x, z=1, y=1, t=0;//this is to get very high numbers
         string be;
         
         cout << "Idatzi zenbaki bat: ";            //Write a number
         cin >> n;
         
         cout << "Idatzi berretzailea: ";           //Write the exponential
         cin >> x;

         z=n;
         
         cout << n << endl;
         
         do{                                        //The main exponential loop. It will do x*x until x is the same as y
              y+=1;
             
              n=n*z;
             
              cout << n << endl;   
         } while(x!=y);
         cout << "------------------------------" << endl << endl;
         
         cout << "Segitu nahi dezu(B/E)?";          //If you want to do it again y/n in english
         cin >> be;
         
         if ((be=="B")||(be=="b")) {                //If yes, return main()
                    return main();
         } else if ((be=="E")||(be=="e")) {         //If no, bye bye!
                    cout << "Agur!";
                    
                    _getch();
                    return 0;
         } else {                                   //If you write anything else, f*** you
                    do                      
                    {
                           system("pause");         //Always saying this
                    } while(t==0);
                    return 0;
         }
}
