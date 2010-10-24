/*

Information:
              Creator: Ekain Garmendia
              Date: 21/10/2010
              Lines: 403
              Difficulty level: Difficult
              (In progress)

*/

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;


int main()
{
	char karratu[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int jokalarien_turnoa(1), jokalariak, x, numeroa, z = 1;
	bool amaiera(true), irabazlea(true);
	string izena1, izena2, jokalarien_izena;
    
	karratu[1]=' ';
    karratu[2]=' ';
    karratu[3]=' ';
    karratu[4]=' ';
    karratu[5]=' ';
    karratu[6]=' ';
    karratu[7]=' ';
    karratu[8]=' ';
    karratu[9]=' ';
    
    cout << "Zenbat jokalariekin jolastuko dezu (1(en proceso...) edo 2)? ";
	cin >> jokalariak;

    if (jokalariak == 2) {
          cout << "Sartu hemen zure izena, lehenengo jokalaria: ";
          cin >> izena1;
          
          cout << "Eta orain sartu bigarren jokalariaren izena: ";
          cin >> izena2;
    } else {
           cout << " ";
    }
    
    switch (jokalariak)
    {
        case 1:// Main game loop
	       do {
		           cout << endl << endl << endl << "                                  Zu X, ni O" << endl;
                   // Print board
                   cout << "                                _________________ " << endl;
                   cout << "                               |     |     |     |" << endl;
                   cout << "                               |  1  |  2  |  3  |" << endl;
                   cout << "                               |     |     |     |" << endl;
		           cout << "                               |-----------------|" << endl;
		           cout << "                               |     |     |     |" << endl;
                   cout << "                               |  4  |  5  |  6  |" << endl;
                   cout << "                               |     |     |     |" << endl;
                   cout << "                               |-----------------|" << endl;
		           cout << "                               |     |     |     |" << endl;
                   cout << "                               |  7  |  8  |  9  |" << endl;
                   cout << "                               |_____|_____|_____|" << endl << endl << endl << endl;
                   
                   cout << "                                _________________ " << endl;
                   cout << "                               |     |     |     |" << endl;
                   cout << "                               |  " << karratu[1] << "  |  " << karratu[2] << "  |  " << karratu[3] << "  |" << endl;
                   cout << "                               |     |     |     |" << endl;
		           cout << "                               |-----------------|" << endl;
		           cout << "                               |     |     |     |" << endl;
                   cout << "                               |  " << karratu[4] << "  |  " << karratu[5] << "  |  " << karratu[6] << "  |" << endl;
                   cout << "                               |     |     |     |" << endl;
                   cout << "                               |-----------------|" << endl;
		           cout << "                               |     |     |     |" << endl;
                   cout << "                               |  " << karratu[7] << "  |  " << karratu[8] << "  |  " << karratu[9] << "  |" << endl;
                   cout << "                               |_____|_____|_____|" << endl;

		           // 1.player X computer O
		           char jokalarien_signoa;
                   jokalarien_signoa = 'X';
                   	
		           // Movement of players
		           cout << endl << "Benga! Ezetz irabazi!" << endl;
		           bool mugimendu_balidoa;
		           // Loop until we get a valid move
		           do {
			          char hurrengo_mugimendua;
			          cin >> hurrengo_mugimendua;
			          mugimendu_balidoa = true;

			          // Check for a valid move
			             
                         if (hurrengo_mugimendua == '1' && karratu[1] == ' ') {
                            karratu[1] = jokalarien_signoa;
                         } else if (hurrengo_mugimendua == '2' && karratu[2] == ' ') {
				            karratu[2] = jokalarien_signoa;
                         } else if (hurrengo_mugimendua == '3' && karratu[3] == ' ') {
				            karratu[3] = jokalarien_signoa;
	                     } else if (hurrengo_mugimendua == '4' && karratu[4] == ' ') {
				            karratu[4] = jokalarien_signoa;
	                     } else if (hurrengo_mugimendua == '5' && karratu[5] == ' ') {
				            karratu[5] = jokalarien_signoa;
	                     } else if (hurrengo_mugimendua == '6' && karratu[6] == ' ') {
				            karratu[6] = jokalarien_signoa;
	                     } else if (hurrengo_mugimendua == '7' && karratu[7]== ' ') {
				            karratu[7] = jokalarien_signoa;
	                     } else if (hurrengo_mugimendua == '8' && karratu[8] == ' ') {
				            karratu[8] = jokalarien_signoa;
	                     } else if (hurrengo_mugimendua == '9' && karratu[9] == ' ') {
				            karratu[9] = jokalarien_signoa;
			             } else {
				            cout << "Mugimendu txarra. Saiatu berriz." << endl;
				            mugimendu_balidoa = false;
                         }

                         do
                         {
                            srand(time(0));
                            x = (rand() % 9) + 1;
                            
                            if (karratu[x] != ' ') {
                                mugimendu_balidoa = false;
                            } else {
                                mugimendu_balidoa = true;
                            }
                         } while(!mugimendu_balidoa);

                         // Need to check the board full (no-win condition)
		                 if (karratu[1] != ' ' && karratu[2] != ' ' && karratu[3] != ' ' &&
			                 karratu[4] != ' ' && karratu[5] != ' ' && karratu[6] != ' ' &&
			                 karratu[7] != ' ' && karratu[8] != ' ' && karratu[9] != ' ' && !amaiera)
	                         {
			                            amaiera = true;
			                            irabazlea = false;
                             } else {
                             karratu[x] = 'O';
                             }
                          mugimendu_balidoa = true;
                         
                   } while (!mugimendu_balidoa);
                   system("cls");
		           
                   amaiera	= false;
		           irabazlea = true;
		           /// Check for end of game conditions
		           if (karratu[1] != ' ') {
			          if (karratu[2] == karratu[1] && karratu[3] == karratu[1]) {
				         amaiera = true;
                      }
                      if (karratu[4] == karratu[1] && karratu[7] == karratu[1]) {
				         amaiera = true;
			          }
		           }
		           if (karratu[5] != ' ') {
			          if (karratu[1] == karratu[5] && karratu[9] == karratu[5]) {
				         amaiera = true;
                      }
			          if (karratu[2] == karratu[5] && karratu[8] == karratu[5]) {
				         amaiera = true;
			          }
			          if (karratu[4] == karratu[5] && karratu[6] == karratu[5]) {
				         amaiera = true;
			          }
                      if (karratu[3] == karratu[5] && karratu[7] == karratu[5]) {
				         amaiera = true;
			          }
		           }
		           if (karratu[9] != ' ') {
			          if (karratu[3] == karratu[9] && karratu[6] == karratu[9]) {
				         amaiera = true;
			          }
			          if (karratu[7] == karratu[9] && karratu[8] == karratu[9]) {
				         amaiera = true;
			          }
		           }
		           // Need to check the board full (no-win condition)
		           if (karratu[1] != ' ' && karratu[2] != ' ' && karratu[3] != ' ' &&
			           karratu[4] != ' ' && karratu[5] != ' ' && karratu[6] != ' ' &&
			           karratu[7] != ' ' && karratu[8] != ' ' && karratu[9] != ' ' && !amaiera)
	                {
			           amaiera = true;
			           irabazlea = false;
		            }
                   
			        if (amaiera) {
                       if (irabazlea) {
                          cout << endl << jokalarien_izena << " jokalariak irabazi du!" << endl;
                       }
                       //print ending board
                       cout << "                                _________________ " << endl;
                       cout << "                               |     |     |     |" << endl;
                       cout << "                               |  " << karratu[1] << "  |  " << karratu[2] << "  |  " << karratu[3] << "  |" << endl;
                       cout << "                               |     |     |     |" << endl;
		               cout << "                               |-----------------|" << endl;
		               cout << "                               |     |     |     |" << endl;
                       cout << "                               |  " << karratu[4] << "  |  " << karratu[5] << "  |  " << karratu[6] << "  |" << endl;
                       cout << "                               |     |     |     |" << endl;
                       cout << "                               |-----------------|" << endl;
		               cout << "                               |     |     |     |" << endl;
                       cout << "                               |  " << karratu[7] << "  |  " << karratu[8] << "  |  " << karratu[9] << "  |" << endl;
                       cout << "                               |_____|_____|_____|" << endl;


                       cout << "                                     Amaiera!" << endl;
                       cout << "                              Jolastu berriz (b/e)?" << endl;
                   
                       char jokatu_berriz;
                       cin >> jokatu_berriz;
                   
                       cout << endl << jokalarien_turnoa << " irabazi du!" << endl;
                       if (jokatu_berriz == 'b') {
				          amaiera = false;
				          system("cls");
				          // Clear the board
				          karratu[1]=' ';
                          karratu[2]=' ';
                          karratu[3]=' ';
                          karratu[4]=' ';
                          karratu[5]=' ';
                          karratu[6]=' ';
                          karratu[7]=' ';
                          karratu[8]=' ';
                          karratu[9]=' ';
                       } else {
                          return 0;
                       }
                    }
	       } while(!amaiera);
//**********************************************************************************************************************************
        case 2:// Main game loop
	       do {
                   // Print board
                   cout << "                                _________________ " << endl;
                   cout << "                               |     |     |     |" << endl;
                   cout << "                               |  1  |  2  |  3  |" << endl;
                   cout << "                               |     |     |     |" << endl;
		           cout << "                               |-----------------|" << endl;
		           cout << "                               |     |     |     |" << endl;
                   cout << "                               |  4  |  5  |  6  |" << endl;
                   cout << "                               |     |     |     |" << endl;
                   cout << "                               |-----------------|" << endl;
		           cout << "                               |     |     |     |" << endl;
                   cout << "                               |  7  |  8  |  9  |" << endl;
                   cout << "                               |_____|_____|_____|" << endl << endl << endl << endl;
                   
                   cout << "                                _________________ " << endl;
                   cout << "                               |     |     |     |" << endl;
                   cout << "                               |  " << karratu[1] << "  |  " << karratu[2] << "  |  " << karratu[3] << "  |" << endl;
                   cout << "                               |     |     |     |" << endl;
		           cout << "                               |-----------------|" << endl;
		           cout << "                               |     |     |     |" << endl;
                   cout << "                               |  " << karratu[4] << "  |  " << karratu[5] << "  |  " << karratu[6] << "  |" << endl;
                   cout << "                               |     |     |     |" << endl;
                   cout << "                               |-----------------|" << endl;
		           cout << "                               |     |     |     |" << endl;
                   cout << "                               |  " << karratu[7] << "  |  " << karratu[8] << "  |  " << karratu[9] << "  |" << endl;
                   cout << "                               |_____|_____|_____|" << endl;

		           // Players sign
                   char jokalarien_signoa;
		           if (jokalarien_turnoa == 1) {
                          jokalarien_signoa = 'X';
		           } else {
			              jokalarien_signoa = 'O';
                   }
                   
                   if (jokalarien_turnoa == 1) {
                          jokalarien_izena = izena1;
                   } else {
                          jokalarien_izena = izena2;
                   }
		           // Movement of players
		           cout << endl << jokalarien_izena << " jokalariak mugitu behar du." << endl;
		           
		           bool mugimendu_balidoa;
		           // Loop until we get a valid move
		           do {
			          char hurrengo_mugimendua;
                      cin >> hurrengo_mugimendua;
                      mugimendu_balidoa = true;
                      
                      // Check for a valid move
                      if (hurrengo_mugimendua == '1' && karratu[1] == ' ') {
                            karratu[1] = jokalarien_signoa;
                         } else if (hurrengo_mugimendua == '2' && karratu[2] == ' ') {
				            karratu[2] = jokalarien_signoa;
                         } else if (hurrengo_mugimendua == '3' && karratu[3] == ' ') {
				            karratu[3] = jokalarien_signoa;
	                     } else if (hurrengo_mugimendua == '4' && karratu[4] == ' ') {
				            karratu[4] = jokalarien_signoa;
	                     } else if (hurrengo_mugimendua == '5' && karratu[5] == ' ') {
				            karratu[5] = jokalarien_signoa;
	                     } else if (hurrengo_mugimendua == '6' && karratu[6] == ' ') {
				            karratu[6] = jokalarien_signoa;
	                     } else if (hurrengo_mugimendua == '7' && karratu[7]== ' ') {
				            karratu[7] = jokalarien_signoa;
	                     } else if (hurrengo_mugimendua == '8' && karratu[8] == ' ') {
				            karratu[8] = jokalarien_signoa;
	                     } else if (hurrengo_mugimendua == '9' && karratu[9] == ' ') {
				            karratu[9] = jokalarien_signoa;
			             } else {
				            cout << "Mugimendu txarra. Saiatu berriz." << endl;
				            mugimendu_balidoa = false;
                         }
                         system("cls");
                   } while (!mugimendu_balidoa);

		           amaiera	= false;
		           bool irabazlea = true;
		           // Check for end of game conditions
		           if (karratu[1] != ' ') {
			          if (karratu[2] == karratu[1] && karratu[3] == karratu[1]) {
				         amaiera = true;
                      }
                      if (karratu[4] == karratu[1] && karratu[7] == karratu[1]) {
				         amaiera = true;
			          }
		           }
		           if (karratu[5] != ' ') {
			          if (karratu[1] == karratu[5] && karratu[9] == karratu[5]) {
				         amaiera = true;
                      }
			          if (karratu[2] == karratu[5] && karratu[8] == karratu[5]) {
				         amaiera = true;
			          }
			          if (karratu[4] == karratu[5] && karratu[6] == karratu[5]) {
				         amaiera = true;
			          }
                      if (karratu[3] == karratu[5] && karratu[7] == karratu[5]) {
				         amaiera = true;
			          }
		           }
		           if (karratu[9] != ' ') {
			          if (karratu[3] == karratu[9] && karratu[6] == karratu[9]) {
				         amaiera = true;
			          }
			          if (karratu[7] == karratu[9] && karratu[8] == karratu[9]) {
				         amaiera = true;
			          }
		           }
		           // Need to check the board full (no-win condition)
		           if (karratu[1] != ' ' && karratu[2] != ' ' && karratu[3] != ' ' &&
			           karratu[4] != ' ' && karratu[5] != ' ' && karratu[6] != ' ' &&
			           karratu[7] != ' ' && karratu[8] != ' ' && karratu[9] != ' ' && !amaiera)
	                {
			           amaiera = true;
			           irabazlea = false;
		            }
                   
			        if (amaiera) {
                       if (irabazlea) {
                          cout << endl << jokalarien_izena << " jokalariak irabazi du!" << endl;
                       }
                       //print ending board
                       cout << "                                _________________ " << endl;
                       cout << "                               |     |     |     |" << endl;
                       cout << "                               |  " << karratu[1] << "  |  " << karratu[2] << "  |  " << karratu[3] << "  |" << endl;
                       cout << "                               |     |     |     |" << endl;
		               cout << "                               |-----------------|" << endl;
		               cout << "                               |     |     |     |" << endl;
                       cout << "                               |  " << karratu[4] << "  |  " << karratu[5] << "  |  " << karratu[6] << "  |" << endl;
                       cout << "                               |     |     |     |" << endl;
                       cout << "                               |-----------------|" << endl;
		               cout << "                               |     |     |     |" << endl;
                       cout << "                               |  " << karratu[7] << "  |  " << karratu[8] << "  |  " << karratu[9] << "  |" << endl;
                       cout << "                               |_____|_____|_____|" << endl;


                       cout << "                                     Amaiera!" << endl;
                       cout << "                              Jolastu berriz (b/e)?" << endl;
                   
                       char jokatu_berriz;
                       cin >> jokatu_berriz;
                   
                       cout << endl << jokalarien_turnoa << " irabazi du!" << endl;
                       if (jokatu_berriz == 'b') {
				          amaiera = false;
				          system("cls");
				          // Clear the board
				          karratu[1]=' ';
                          karratu[2]=' ';
                          karratu[3]=' ';
                          karratu[4]=' ';
                          karratu[5]=' ';
                          karratu[6]=' ';
                          karratu[7]=' ';
                          karratu[8]=' ';
                          karratu[9]=' ';
			        
                          }
                          jokalarien_turnoa = 1;
                    } else {
                        // Alternate player turns
			            if (jokalarien_turnoa == 1) {
                           jokalarien_turnoa = 2;
                        } else {
                           jokalarien_turnoa = 1;
                        }
                    }
	       } while(!amaiera);
        }
}
