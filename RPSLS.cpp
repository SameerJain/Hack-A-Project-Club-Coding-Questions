/* This game is rock, paper,  scissors, lizard, spock. 
rock beats scissors, lizard
lizard beats spock, paper
spock beats scissors, rock
paper beats spock and rock */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {

char repeat ;


srand (time(NULL));
int computer = rand() %5 +1 ;
int user = 0;




int rock = 1;
int paper = 2;
int scissors = 3;
int lizard = 4;
int spock = 5;

int wins= 0;
int losses = 3;

while (wins < 3 || losses < 3) {  


cout << "Rock, Paper, Scissors, Lizard, Spock!\n";
cout << " 1) Rock\n 2) Paper\n ";
cout << "3) Scissors\n 4) Lizard\n 5) spock\n"; 



cin >> user;

//Rock

    //tie
        if (user == rock && computer == rock) {

            cout << "Your rock tied with my rock";
        } 

    //win
        else if (user == rock && computer == scissors) {

            cout << "Your rock crushed my scissors";
            wins++;
        } 

        else if (user == rock && computer == lizard) {

            cout << "Your rock crushed my lizard";
            wins++;
        } 

    //loss

        else if (user == rock && computer == paper) {

            cout << "My paper covered your rock";
        } 

        else if (user == rock && computer == spock) {

            cout << "My spock vaporized your rock";

        }    


//Paper

    //tie
        if (user == paper && computer == paper) {

            cout << "Your paper tied with my paper";
        } 

    //win
        else if (user == paper && computer == rock) {

            cout << "Your paper covered my rock";
            wins++;
        } 

        else if (user == paper && computer == spock) {

            cout << "Your paper disproved my Spock";
        } 

    //loss

        else if (user == paper && computer == lizard) {

            cout << "My lizard ate your paper"; 
        }

        else if (user == paper && computer == scissors) {

            cout << "My scissor cut your paper";

        } 

//Lizard

    //tie
        if (user == lizard && computer == lizard) {

            cout << "Your lizard tied with my lizard";
        } 

    //win
        else if (user == lizard && computer == paper) {

            cout << "Your lizard are my paper";
        } 

        else if (user == lizard && computer == spock) {

            cout << "Your lizard poisoned my Spock";
        } 

    //loss

        else if (user == lizard && computer == scissors) {

            cout << "My scissors decapitated your lizard";
        } 

        else if (user == lizard && computer == rock) {

            cout << "My rock crushes your lizard";

        }    


//Spock

    //tie
        if (user == spock && computer == spock) {

            cout << "Your spock tied with my spock";
        } 

    //win
        else if (user == spock && computer == scissors) {

            cout << "Your spock smash my scissors";
        } 

        else if (user == spock && computer == rock) {

            cout << "Your spock vaporizes my rock";
        } 

    //loss

        else if (user == spock && computer == paper) {

            cout << "My paper disproves your spock";
        } 

        else if (user == spock && computer == lizard) {

            cout << "My lizard poisoned your spock";

        }    



//Scissors

    //tie
        if (user == scissors && computer == scissors) {

            cout << "Your scissors tied with my scissors";
        } 

    //win
        else if (user == scissors && computer == paper) {

            cout << "Your scissors cut my paper";
        } 

        else if (user == scissors && computer == lizard) {

            cout << "Your scissors decapitated my lizard";
        } 

    //loss

        else if (user == scissors && computer == rock) {

            cout << "My rock crushed your scissors";
        } 

        else if (user == scissors && computer == spock) {

            cout << "My spocks smashed your scissors";

        }    

cout << "\n";



} // while 


return 0;

}