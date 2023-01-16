#include <iostream>
using namespace std;

int main () {

    char vowels[5]{'A','E','I','O','U'};
    int result;

    string input;

    int counter = 0;
    
    cout << "Enter a string: " ;

    cin >> input;

    for(int i = 0; i < input.length(); i++) {
        for(int j = 0; j < vowels.length(); j++) {
            if (input[i] == vowels[j]) {
                counter++;
            }
        }
    }



    
    return 0;
} 