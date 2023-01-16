// checks amount of money inside register, takes in customers
#include <iostream>
using namespace std;

int main()
{

    int regsum;  // total amount of cash in register
    int paidin;  // amount coming in from customers
    int paidout; // amount taken out for cashback
    char moreCus;
    int billsum;          // customers bill sum
    int cashback;         // If debit customer wants cashback
    string userEnt;       // For user to enter yes or no, and pay type
    bool doneday = false; // will be false when there is another customer

    // Starts day off with total cash in register
    cout << "Enter the total amount of cash in the register:" << endl;
    cin >> regsum;
    cout << "Now its time for customers!\n\n\n";

    while (doneday == false)
    { // stops when no customer left

        cout << "Hello customer!\nEnter total value of bill:\n";
        cin >> billsum; // customer bill
        cout << "Enter 'cash' or 'debit:'\n";
        cin >> userEnt; // pay type

        if (userEnt == "cash")
        { // puts money into reg total
            regsum += billsum;
        }

        else if (userEnt == "debit")
        {

            cout << "Do you want cash back? ( Y or N ) :\n";
            cin >> userEnt;

            if (userEnt == "Y")
            { // money taken out of register
                cout << "Enter Amount:\n";
                cin >> cashback;
                regsum -= cashback;
            }

            else if (userEnt == "N")
            { // No change to total
                cout << "No cashback!\n";
            }
        }

        if (regsum >= 0)
        { // special case if cash in register is less than zero

            doneday = true;
        }

        cout << "Is there another customer?\n";
        cin >> moreCus;

        if (moreCus == 'Y')
        { // loops back
            doneday = false;
        }

        if (moreCus == 'N')
        { // breaks out
            doneday = true;
        }
    }

    // after last iteration:
    if (doneday == true)
    {
        cout << "Total amount of all cash paid to the register: " << paidin << endl;
        cout << "Total amount of all cash given back: " << paidout << endl;
        cout << "Final balance in the register: " << regsum << endl;
    }

    return 0;
}