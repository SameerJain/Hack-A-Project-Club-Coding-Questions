#include <iostream>
#include <cstdlib>
using namespace std;



int main () {

// user input
int start;
int choice;

// user hp 
int userhp = 200;

//weapon damage
int saberhit = 50; 
int gunhit = 10; 
int grenadehit = 25;

// text variables
string sabercolor ;


// intro
    cout << "\n\n********************************************\n\n";
    cout << "Welcome to the Star Wars Text Adventure Game!\n\n";
    cout << "********************************************\n\n";

    cout << "Enter any integer to continue.\n";

    cin >> start;


// saber color select 


    cout << "\nYou are a brand new Jedi apprentice who has just completed your training!\n";
    cout << "What color lightsaber would you like?\n\n";
    cout << "1) Blue\n2) Green\n3) Purple\n";

    cin >> choice ;



    if (choice == 1) {
        sabercolor = "blue";
    }

    else if (choice == 2){

    sabercolor = "green";

    }

    else if (choice == 3) {

    sabercolor = "purple";

    }

    


    cout << "\nYou have chosen a " << sabercolor << " lightsaber.\n\n";

    cout << "Time for you to go on a mission to explore the icy planet: Hoth.\n";

    cout << "You have: " << userhp << " HP." << "\nIf you run out, the game will end.\n\n";



// Cave


    int Wampahp = 100; 

    //Wampa fight instructions 

    cout << "You begin to walk into the cave...\n";
    cout << "Oh no! You have found a Wampa, a giant ice monster inside the cave!\n\n";
    cout << "Select a weapon to use.\n";
    cout << " 1) Lightsaber\n 2) Gun\n 3) Grenade\n\n ";
    cout << "Enter the corresponding number:\n ";


    for (Wampahp = 100; Wampahp > 0; ) {

        cin >> choice;

        
        // weapon damages

        if (choice == 1) {

            Wampahp -= saberhit;

            cout << "\n\nYou swung your " << sabercolor << " lightsaber to hit the Wampa.\n";
        }

            else if (choice == 2) {
            Wampahp -= gunhit;

            cout << "\n\nYou shot the Wampa with your gun. Not very effective.\n";
        }

            else if (choice == 3) {
            Wampahp -= grenadehit;

            cout << "\n\nYou threw your grenade at the Wampa.\n";
        }

            
            userhp -= 25; // Wampa bite


        if (Wampahp > 0 && userhp > 0 ){ // redo turn

            cout << "The Wampa now currently has " << Wampahp << " HP.\n" ;
            

            cout << "You were bitten!" <<   " You currently have " << userhp << " HP.\n\n";
            cout << "Keep hitting him until he is dead!\n";
            cout << "Re-Select a weapon to use:\n\n";
            cout << " 1) Lightsaber\n 2) Gun\n 3) Grenade\n ";
        }

        else if (Wampahp <= 0 && userhp >0 ){ // wampa death
                cout << "The Wampa has been killed! Hooray!";}



        else if ( userhp <= 0 ) { // user death

        cout << "You have ran out of HP. You have died.\n\n";
        return 0;}

    }// end for loop

    userhp = 200;

    cout << "\n\nYou have survived the fight and have eaten some food. You now have " << userhp << " HP.\n";





// x wing fix


    srand(time(NULL));

    int valvenum = rand() %10;

    int valveguess = 0;

    int tries = 12;

    cout << "\n\n\nThe X-Wing, your spaceship currently can't fly!\n";
    cout << "One of the 10 valves are broken. You have to check each one individually.";
    cout << "You only have time for 8 tries.";
    cout << "\n\nSelect a valve to check by entering a number from 1-10.";
    cout << "\nKeep checking each valve until you find the broken one: \n\n\n";



    cout << valvenum << endl;

    while (valvenum != valveguess && tries > 0 ) { 

    cout << "\n\nTries left:" << tries << endl; 

    cin >> valveguess; 



    if (valveguess != valvenum) {

        tries--;


        switch (valveguess) {

        case 1:
        cout << "Valve 1 looks good, all stable.";
        break;

        case 2:
        cout << "Valve 2 is working, just a little smelly. Try again.";
        break;

        case 3:
        cout << "Valve 3 is all squaky clean.";
        break;

        case 4:
        cout << "Valve 4 isn't broken.";
        break;

        case 5:
        cout << "Valve 5 is working, but not your brain. Try again.";
        break;

        case 6:
        cout << "Valve 6 works, so lets check again.";
        break;
        
        case 7:
        cout << "Valve 7 is perfectly fine.";
        break;

        case 8:
        cout << "Valve 8 works like a charm! Try again.";
        break;

        case 9:
        cout << "Valve 9 is is not the problem. ";
        break;

        case 10:
        cout << "Valve 10 is working. Lets check another valve.";
        break;

        

    }

    if (tries == 0) {

    cout << "Your ship has blown up and you have died.";
        return 0;
    }

    }

    if (valveguess == valvenum ) {

        cout << "Nice! You have found out that Valve " << valvenum <<" is broken!\n";
        cout << "You are now able to fix it and get your X-Wing flying!\n\n"; 


    }

    } // end while loop



// Vader


    int vaderhp = 300; 

    //Vader fight instructions 

    cout << "\n\n\n...Darth Vader has found you!\n";
    cout << "Time to fight Darth Vader and save the galaxy!\n\n";
    cout << "Select a weapon to use.\n";
    cout << " 1) Lightsaber\n 2) Gun\n 3) Grenade\n\n ";
    cout << "Enter the corresponding number:\n ";


    for (vaderhp = 225; vaderhp > 0; ) {

        cin >> choice;

    // weapon damages

        if (choice == 1) {

            vaderhp -= saberhit - 35;

            cout << "\n\nYou swung your " << sabercolor << " lightsaber to attack Vader.\n";
            cout << "Its not very effective, he is very experienced against lightsaber attacks.\n\n";
                    }

        else if (choice == 2) {
         vaderhp -= gunhit + 40;

         cout << "\n\nYou shot the Wampa with your gun. Somewhat effective.\n\n";
                    }

         else if (choice == 3) {
            vaderhp -= grenadehit + 60;
            cout << "\n\nYou threw your grenade at Vader. It's super effective!\n";
                    }

                        
             userhp -= 40; // Vader Swing


        if (vaderhp > 0 && userhp > 0 ){ // redo turn

         cout << "Darth Vader now currently has " << vaderhp << " HP.\n" ;
                        

         cout <<  "You were struck by his lightsaber!" <<   " You currently have " << userhp << " HP.\n\n";
         cout << "Keep fighting Vader until he is dead!\n";
         cout << "Re-Select a weapon to use:\n\n";
         cout << " 1) Lightsaber\n 2) Gun\n 3) Grenade\n ";
     }

        else if (vaderhp <= 0 ){ //  death
                            cout << "Vader has been killed! Galaxy saved!";}


        else if ( userhp <= 0 ) { // user death

        cout << "You have ran out of HP. Darth Vader has taken over!.\n\n";
        return 0;}


        }// end for loop


         cout << "\n\nYou have defeated Darth Vader, and saved the galaxy with " << userhp << " HP left!\n\n";
         

    return 0;
}