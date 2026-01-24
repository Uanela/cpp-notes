#include <iostream>
#include "../lib/std_facilities.h"

int main()
{
  std::cout << "Please enter your first name:\n";
  string first_name;

  std::cin >> first_name;
  cout << "Hello, " <<first_name<< "!\n";

  return 0;
}
