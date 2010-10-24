/*

Information:
              Creator: Ekain Garmendia
              Date: 16/10/2010
              Lines: 364
              Difficulty level: Difficult

*/

#include <iostream>			//Couting and everything else
#include <windows.h>		//Functions 
#include <cstdlib>			//Srand() and rand()
#include <ctime>			//Seeding a random number out of time
#include <Wincon.h>

#define BLOCK     (char)219 //A BLOCK
#define TOP_RIGH  (char)187	//TOP RIGHT CORNER
#define BOT_RIG	  (char)188	//BOTTOM RIGHT CORNER
#define VERTICA   (char)186	//A VERTICAL LINE
#define BOT_LEF	  (char)200	//BOTTOM LEFT CORNER
#define TOP_LEFT  (char)201	//TOP LEFT CORNER
#define STRAIGHT  (char)205	//A HORIZONTAL LINE

bool SetColor(WORD COLOR);	//FOR THE COLOR
void DRAW();				//TO DRAW THE OUTLINES
void gotoxy(int x,int y);	//TO POSITION THE CURSOR
void Format();				//FORMAT SIMULATION
void Announce();			//ANNOUNCING WARNINGS
void Check();				//A CHECK SEQUENCE
void Full();                //TO GET TO FULL SIZE

using namespace std;		//FOR COUT,ENDL, ETC.

							//TEXT COLOR LT BLUE
	WORD  F_COLOR_BLUE   = FOREGROUND_BLUE  | FOREGROUND_INTENSITY ;
							//TEXT COLOR BR YELLOW
	WORD  F_COLOR_YELLOW = FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY;
							//BACKGROUND COLOR LT BLUE
	WORD  F_COLOR_BK_BLUE= BACKGROUND_BLUE | BACKGROUND_INTENSITY;
							//THE COMBINATION THAT WILL BE USED 
	WORD F_COLOR_COMBINATION=F_COLOR_YELLOW | BACKGROUND_BLUE | BACKGROUND_INTENSITY;

int main()
{
	Full();					//Set the program to full-screen
    
    SetColor( F_COLOR_COMBINATION );//Set the text with yellow text & blue background

	DRAW();					//Draw the outlines

	Announce();				//Announce the Warnings

	Check();				//A simulation "Check"

	Format();				//A simulation "Format"

	gotoxy(20,44);			//<---Go at the bottom

	return 0;				//Say bye-bye 
}

bool SetColor(WORD F_COLOR)//Here it sets the color to which ever color you want
{
						   //Here it gets a handle that gets the a pointer to the
						   //output of the console
	HANDLE hndl = GetStdHandle(STD_OUTPUT_HANDLE);
	
							//Set the color of the text to which ever color you like
	SetConsoleTextAttribute( hndl , F_COLOR );

	return TRUE;

}

void gotoxy(int x,int y)	//The Gotoxy Function That made drawing easier!
{
	HANDLE hConsoleOutput;	//A handle for our console
	COORD dwCursorPosition;	//A COORD for a Function

	dwCursorPosition.X = x;	//Getting x value from programmer
	dwCursorPosition.Y = y;	//Getting y value from programmer

							//Getting a valid handle the points to the 
							//output of the console
	
hConsoleOutput = GetStdHandle
(STD_OUTPUT_HANDLE); 

							//Go to those coordinates
                SetConsoleCursorPosition                                                     (hConsoleOutput,dwCursorPosition);
}
	
void DRAW()
{		


					       //}This is the how outline, that outlines the whole screen							
	cout<<"\n"<<TOP_LEFT;   //This is the top left corner of the whole outline
	for(int x=0; x<77; x++)	
	{
		cout<<STRAIGHT;	   //Here we go straight to the other corner
	}

	cout<<TOP_RIGH<<endl;   //This is the top right corner of the whole outline
							
	for(int x=0; x<47; x++)	   //}This Process Covers both columns on each side
	{
		cout<<VERTICA<<
		"                          "			   //} A big 78 space
		"                          "			   // 
		"                         "<<VERTICA<<endl;//} A big 78 space
	}

	cout<<BOT_LEF;			//This Makes the Bottom Left Corner

	for(int x=0; x<77; x++)
	{
		cout<<STRAIGHT;		//}This goes from the bottom-left to the right
	}

	cout<<BOT_RIG<<endl;	//This makes the Bottom Right Corner

						    //}This is the how outline, that outlines the whole screen
	
	gotoxy(10,38);			//<--- Go around the Bottom Of the screen 
	
							//Create a box in where progress will be done...

	cout<<TOP_LEFT;          //Create the Top Left Corner of the Progress-Bar

	for(int x=0; x<53; x++)
	{
		cout<<STRAIGHT;     //}Here we go from the top-left to the top-right
	}

	cout<<TOP_RIGH<<endl;	//Create the Top Right Corner of the Progress-Bar

	gotoxy(64,39);			//<--- Go 2 lines down and x-position of the Top Left 

	cout<<VERTICA;			//Make a vertical, for helping us closing the box

	gotoxy(10,39);			//<--- Go to the other side to do the same thing

	cout<<VERTICA;			//Make a vertical

	gotoxy(10,40);			//Go to the bottom of the first vertical
	
	cout<<BOT_LEF;			//Create the Bottom Left Corner

	for(int x=0; x<53; x++)
	{
		cout<<STRAIGHT;		//}Here you make a line all the way to the other side
	}
	
	cout<<BOT_RIG;			//Make the Bottom Right Corner

	gotoxy(34,5);
	cout<<"WINDOWS";		//}THE TITLE "SETUP"		
}

void Full()					//FULL-SCREEN FUNCTION
{
	keybd_event(VK_MENU, 0x38, 0, 0);
	keybd_event(VK_RETURN, 0x1c, 0, 0);
	keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
}

void Announce()				//Here it just couts the warnings...
{
	gotoxy(10,10);			//Go at the top

	Sleep(1000);			//Sleep for a second

							//1st Warning
	cout<<"\aERROR: ARCHIVO MALICIOSO ENCONTRADO:";
	
	Sleep(500);
	
	gotoxy(10,11);
	
	                        //Info
	cout<<"C:/Windows/System32/Tuenti users/Ekain_Garmendia.tue";

	Sleep(5000);			//Sleep for 5 seconds

	gotoxy(10,13);			//Go below the 1st Warning

							//3rd Warning
	cout<<"\aWINDOWS ESTA INTENTANDO SOLUCIONAR EL PROBLEMA.";

	Sleep(1000);			//Sleep for a second

	gotoxy(10,15);			//Go below the 2nd Warning

							//4th Warning
	cout<<"\aPOR FAVOR, ESPERE HASTA QUE SE ACABE EL PROCESO DE ELIMINACION.";

	Sleep(3000);			//Sleep for 3 seconds
}

void Check()
{
     
     for(int x=0; x<2; x++) //Repeat the process for 2 times...
     {
             gotoxy(5,18);
     
     
             cout<<"SOLUCIONANDO EL PROBLEMA |.........................................|";

             Sleep(1000);			//Sleep for a while
		
             gotoxy(5,18);		    //Go to the same place

							//Cout a loading character
             cout<<"SOLUCIONANDO EL PROBLEMA ||||......................................|";

             Sleep(600);			//Sleep for a while
		
             gotoxy(5,18);		    //Go to the same place

							//Cout a loading character
             cout<<"SOLUCIONANDO EL PROBLEMA ||||||....................................|";

             Sleep(400);			//Sleep for a while
		
             gotoxy(5,18);		    //Go to the same place

							//Cout a loading character
             cout<<"SOLUCIONANDO EL PROBLEMA |||||||||||...............................|";

             Sleep(850);			//Sleep for a while
		
             gotoxy(5,18);		    //Go to the same place

							//Cout a loading character
             cout<<"SOLUCIONANDO EL PROBLEMA ||||||||||||..............................|";

             Sleep(200);			//Sleep for a while
		
             gotoxy(5,18);		    //Go to the same place

							//Cout a loading character
             cout<<"SOLUCIONANDO EL PROBLEMA ||||||||||||||............................|";

             Sleep(1400);			//Sleep for a while
		
             gotoxy(5,18);		    //Go to the same place

							//Cout a loading character
             cout<<"SOLUCIONANDO EL PROBLEMA ||||||||||||||||||||||....................|";

             Sleep(300);			//Sleep for a while
		
             gotoxy(5,18);		    //Go to the same place

							//Cout a loading character
             cout<<"SOLUCIONANDO EL PROBLEMA |||||||||||||||||||||||||.................|";

             Sleep(200);			//Sleep for a while
		
             gotoxy(5,18);		    //Go to the same place

							//Cout a loading character
             cout<<"SOLUCIONANDO EL PROBLEMA |||||||||||||||||||||||||||...............|";

             Sleep(1000);			//Sleep for a while
		
             gotoxy(5,18);		    //Go to the same place

							//Cout a loading character
             cout<<"SOLUCIONANDO EL PROBLEMA ||||||||||||||||||||||||||||||||..........|";

             Sleep(1900);			//Sleep for a while
		
             gotoxy(5,18);		    //Go to the same place

							//Cout a loading character
             cout<<"SOLUCIONANDO EL PROBLEMA |||||||||||||||||||||||||||||||||||||||...|";

             Sleep(2000);			//Sleep for a while
		
             gotoxy(5,18);		    //Go to the same place

							//Cout a loading character
             cout<<"SOLUCIONANDO EL PROBLEMA |||||||||||||||||||||||||||||||||||||||||.|";

             Sleep(600);			//Sleep for a while
		
             gotoxy(5,18);		    //Go to the same place

							//Cout a loading character
             cout<<"SOLUCIONANDO EL PROBLEMA |||||||||||||||||||||||||||||||||||||||||||";

             Sleep(3000);			//Sleep for a while
     }
     gotoxy(1,21);
     
     
     cout<<"IMPOSIBLE SOLUCIONAR EL PROBLEMA. POR FAVOR, NO APAGUE O REINICIE EL SISTEMA.";
     
     gotoxy(2,22);
     
     
     cout<<"EL APAGADO O REINICIO DEL SISTEMA BORRARA TODOS LOS ARCHIVOS DEL VOLUMEN C:";

}

void Format()				//Here is where the simulation of formating
{							//takes place!
	gotoxy(10,24);		//Cout that Checking failed and formating is about
							//to take place
	cout<<"WINDOWS NO HA PODIDO ELIMINAR EL ARCHIVO. FORMATEANDO DISCO DURO:";
	
	Sleep(5000);

	gotoxy(10,26);	//<---Go Somewhere, where there is more space

							//Giving more false-additional information
	cout<<"POR FAVOR, NO APAGUE EL SISTEMA.";
	
	
	int ix = 12;			//Initialize a variable that will hold an x-coord.

	gotoxy(10,35);			//<---Go Somewhere to cout for what is below
	

	cout<<"FORMATEANDO VOLUMEN C:";

    
    int restante=1000; //1 sec
    
    int restante2=0;
    
    for(int x=0;x<101;x+=2)	//In here it will cout a Block for a random time
	{	
        
        gotoxy(26,36);		//<---Go to cout the percent
                     
        cout<<x<<"% FALTAN "<<(restante/20)-restante2<<" SEGUNDOS.";		//Cout The Percent Done
                     
		Sleep(restante);		//Sleep for a random time interval from 0 to 9 sec.

		gotoxy(ix,39);		//<---Go to a position to cout the Block

		cout<<BLOCK;		//Cout the Block

		ix++;   			//Move one to cout the next block
		
        restante2+=1;
	}
		gotoxy(20,42);		//<---Go somewhere, where there is space

							//Cout that there computer has succesfully
							//Been formatted! HAHAHAH!!
		cout<<"\aDISCO DURO BORRADO, VIRUS NEUTRALIZADO.";
		
		Sleep(10000);
		
		system("Shutdown -s");//Computer shutdowns automatically
}
