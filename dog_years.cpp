#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  double dog_age = 1;

  int early_years = 21; // base age from 2 onwards

  int later_years = (dog_age - 2) * 4;

  int human_years = early_years + later_years;

  double alt_hy = (dog_age / 2) * 21;

  if (dog_age >= 2)
  {
    cout << "My name is Snuffles! Ruff ruff, I am " << human_years << " years old in human years.";
  }

  if (dog_age < 2)
  {
    cout << "My name is Snuffles! Ruff ruff, I am " << alt_hy << " years old in human years.";
  }

  return 0;
}