#include <iostream>
#include <cmath>


int main () 

{

double a, b, c;

double root1, root2;

std::cout << "This is a Quadratic Equation Program!\n";

std::cout << "Enter a\n";
std::cin >> a;

std::cout << "Enter b\n";
std::cin >> b;

std::cout << "Enter c\n";
std::cin >> c;

root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

std::cout << "a = " << a << "\n b = " << b << "\n c = " << c << "\nRoot 1 = " << root1 << "\nRoot 2 = " << root2; 

return 0;

}