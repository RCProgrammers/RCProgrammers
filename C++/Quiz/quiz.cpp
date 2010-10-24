/*

Information:
              Creator: Ekain Garmendia
              Date: 11/10/2010
              Lines: 99
              Difficulty level: Easy

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int e, j[] = {1, 2, 3, 4, 5, 6, 7 ,8 ,9 ,10 ,11 ,12 ,13 ,14 ,15 ,16 ,17 ,18 , 19, 20}, t, sum;
    string x, y;
    
    //Here the welcome message
    cout << "Kaixo, eta ongi etorri Quiz honetara! 20 galdera egingo dizkizut eta zuk erantzun egin behar ko diazu, ados? Has gaitezen!" << endl;
    
    //The question
    cout << "Zein izan zen Amerika aurkitu zuena?" << endl;
    
    //Answers
    cout << "a ----" << endl;
    cout << "b aaaa" << endl;
    cout << "c bbbb" << endl;
    cout << "d cccc" << endl;
    cin >> x;
    
    //Whitch answer is good and whitch not
    if (x == "a")
    {
          cout << "Oso ondo!" << endl;
          j[1] = 1;
    } else if (x == "b") {
          cout << "Erantzun okerra, erantzun zuzena A zen." << endl;
          j[2] = 0;
    } else if (x == "c") {
          cout << "Erantzun okerra, erantzun zuzena A zen." << endl;
          j[2] = 0;
    } else if (x == "d") {
          cout << "Erantzun okerra, erantzun zuzena A zen." << endl;
          j[2] = 0;
    } else {
           do
           {
               cout << "Idatzi a, b, c edo d: " << endl;
               cin >> x;
           } while ((x != "a")&&(x != "b")&&(x != "c")&&(x != "d"));
           if (x == "a") {
              cout << "Oso ondo!" << endl;
           } else {
              cout << "Erantzun okerra, erantzun zuzena A zen." << endl;
           }
    }
    
    //The same as the first question
    cout << endl;
    
    cout << "Zein izan zen ni aurkitu ninduena?" << endl;
    cout << "a ----" << endl;
    cout << "b aaaa" << endl;
    cout << "c bbbb" << endl;
    cout << "d cccc" << endl;
    cin >> y;
    
    if (y == "a")
    {
          cout << "Oso ondo!" << endl;
          j[2] = 1;
    } else if (y == "b") {
          cout << "Erantzun okerra, erantzun ona A zen." << endl;
          j[2] = 0;
    } else if (y == "c") {
          cout << "Erantzun okerra, erantzun ona A zen." << endl;
          j[2] = 0;
    } else if (y == "d") {
          cout << "Erantzun okerra, erantzun ona A zen." << endl;
          j[2] = 0;
    } else {
           do
           {
               cout << "Idatzi a, b, c edo d: " << endl;
               cin >> x;
           } while ((x != "a")&&(x != "b")&&(x != "c")&&(x != "d"));
    }
           
    sum = j[1] + j[2];
    e = sum * 100;
    t = e / 2;
    cout << "Ariketa hauetatik %" << t << " dauzkazu ondo." << endl;
    
    system("pause");
    return 0;
}
