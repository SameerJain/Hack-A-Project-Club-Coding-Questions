// Iterative CPP program to count total number
// of consonants
#include <iostream>
using namespace std;

// 7.1
char first(string str)
{
    for (int i = 0; i < str.length(); i++)
        if (isupper(str[i]))
            return str[i];
    return 0;
}

// 7.2
// Function to check for consonant
bool isConsonant(char ch)
{
    // To handle lower case
    ch = toupper(ch);

    return !(ch == 'A' || ch == 'E' ||
             ch == 'I' || ch == 'O' ||
             ch == 'U') &&
           ch >= 65 && ch <= 90;
}
int totalConsonants(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)

        // To check is character is Consonant
        if (isConsonant(str[i]))
            ++count;
    return count;
}

// 7.3
//  function to return maximum element using recursion
int findMaxRec(int A[], int n)
{
    // if n = 0 means whole array has been traversed
    if (n == 1)
        return A[0];
    return max(A[n - 1], findMaxRec(A, n - 1));
}

// Driver code
int main()
{
    string str = "abc de";
    cout << totalConsonants(str);
    return 0;
}