/*

Information:
              Creator: Ekain Garmendia
              Date: 7/10/2010
              Lines: 154
              Difficulty level: Easy

*/

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
//--------------------------------------------------------------------------------------------------------------------------
int main()                           //All is done with if-else or do-while loops. If you know that, it's easy
{
    int urte, zenbaki, zenbaki1, x=1;
    unsigned long zure_pisua, pisua_eguzkia, pisua_merkurio, pisua_artizarra, pisua_marte, pisua_, pisua_jupiter, pisua_saturno, pisua_urano, pisua_neptuno, pisua_pluton, pisua_enana_blanca, pisua_neutroi_hodeia;
    string izena, zermoduz, zermoduz2, be, be2, be3, be4, aukera, errepik;
    
    cout << "Kaixo, eta ongi etorri galdeketa honetara." << endl;
    cout << "Nola deitzen zara? ";
    cin >> izena;
//--------------------------------------------------------------------------------------------------------------------------
    cout << "\n" << "Kaixo " << izena << "! Zer moduz? ";
    cin >> zermoduz;
    
    if (zermoduz == "ondo")
        cout << "\n" << "Pozten naiz ba!" << endl;
    else if (zermoduz == "gaizki")
        cout << "\n" << "Ba nahiago nuke zu ondo egongo bazina." << endl;
    else
        do {
            cout << "\n" << "Esan dizut esateko zer moduz zauden, eta ez gauza arraroak (hitz batekoa izan behar da): ";
            cin >> zermoduz2;
            if (zermoduz2 == "ondo")
               cout << "\n" << "Bai? ni ere bai nago ondo!" << endl;
            else if (zermoduz2 == "gaizki")
               cout << "\n" << "Ba nahiago nuke zu ondo egongo bazina." << endl;
            else
               cout << " ";
        } while ((zermoduz2 != "ondo")&&(zermoduz2 != "gaizki")&&(zermoduz2 != "earki")&&(zermoduz2 != "gaxki")&&(zermoduz2 != "ongi")&&(zermoduz2 != "ok")&&(zermoduz2 != "sinmas"));
//--------------------------------------------------------------------------------------------------------------------------
    cout << "\n" << "Eta zenbat urte dituzu?  ";
    cin >> urte;

    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "\n" << "Nire memoriaren arabera, zu " << izena << " deitzen zara, " << urte << " urte dituzu, eta " << zermoduz << " zaude. Edo ez? ";
    cin >> be;
    
    if (be == "ez")
    {
          cout << "Orduan gezurra esan didazu? ";
          cin >> be2;
          if (be2 == "bai")
          {
                  do
                  {
                           cout << "GEZURTI! " << endl;
                  } while (be2 != "ez");
          } else if (be2 == "ez") {
                  do
                  {
                           cout << "GEZURTI! " << endl;
                  } while (be2 != "bai");
          } else {
                  do
                  {
                          cout << "Idatzi bai edo ez, mesedez: ";
                  } while ((be2 != "bai")&&(be2 != "ez"));
          }
    } 
    else if (be == "bai")
    {
           cout << "Joe, ze memoria ona dudan!" << endl;
    } 
    else 
    {
           do
           {
                cout << "Idatzi bai edo ez, mesedez: ";
           } while ((be2 != "bai")&&(be2 != "ez"));
    }
          
//--------------------------------------------------------------------------------------------------------------------------
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "\nOrain esan zenbaki bat 100 BAINO TXIKIAGOA, eta nik emango dizut zenbaki horren multiplo guztiak 500 arte." << endl;
    cout << "\nEsan zenbakia: ";
    cin >> zenbaki;
    
    zenbaki1=zenbaki;
    if (zenbaki <= 100)
    {
       do
       {
                cout << zenbaki << endl;
                zenbaki = zenbaki + zenbaki1;
       } while(zenbaki <= 500);
    } else {
       do
       {
                system("pause");
                x=x;
       } while(x <= 1);
    }

//--------------------------------------------------------------------------------------------------------------------------
    cout << "Eta orain, nahi al dezu erakustea beste planetetan zenbat pixatuko zenuke (bai/ez)? ";
    cin >> be3;
    if (be3 == "bai"){
            
            pisua_eguzkia = zure_pisua * 27.072;
            pisua_merkurio = zure_pisua * 0.378;
            pisua_artizarra = zure_pisua * 0.906;
            pisua_marte = zure_pisua * 0.379;
            pisua_jupiter = zure_pisua * 2.533;
            pisua_saturno = zure_pisua * 1.066;
            pisua_urano = zure_pisua * 0.905;
            pisua_neptuno = zure_pisua * 1.133;
            pisua_pluton = zure_pisua * 0.067;
            pisua_enana_blanca = zure_pisua * 1300000;
            pisua_neutroi_hodeia = zure_pisua * 14 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10;
            
            cout << "Eguzkia: " << pisua_eguzkia << "kg." << endl;
            cout << "Merkurio: " << pisua_merkurio << "kg." << endl;
            cout << "Artizarra: " << pisua_artizarra << "kg." << endl;
            cout << "Marte: " << pisua_marte << "kg." << endl;
            cout << "Jupiter: " << pisua_jupiter << "kg." << endl;
            cout << "Saturno: " << pisua_saturno << "kg." << endl;
            cout << "Urano: " << pisua_urano << "kg." << endl;
            cout << "Neptuno: " << pisua_neptuno << "kg." << endl;
            cout << "Pluton: " << pisua_pluton << "kg." << endl;
            cout << "Hauek ez dira planetak, baino interesgarriak izan daitezke." << endl;
            cout << "Enana blanca: " << pisua_enana_blanca << "kg." << endl;
            cout << "Neutroi hodeia: " << pisua_neutroi_hodeia << "kg." << endl;
            
            system("pause");
    } else {
            system("pause");
    }
//--------------------------------------------------------------------------------------------------------------------------
    cout << "Dena errepikatu nahi dezu(B/E)? ";
    cin >> errepik;
    
    if ((errepik=="b")||(errepik=="B")) {
                                        system("cls");
                                        return main();
    } else {
           return 0;
    }
}
