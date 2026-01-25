#include "../lib/std_facilities.h"

int main()
{
  cout << "Enter your first and last names\n";
  string first_name;
  string last_name;
  cin >> first_name >> last_name;
  // simple_error("get a simple error");
  cout << "Hello, " << first_name << " " << last_name;
}
