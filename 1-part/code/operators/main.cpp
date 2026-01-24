#include "../lib/std_facilities.h"

int main()
{
  cout << "Please enter an floating point number:\n";

  double n;
  cin >> n;
  cout << "n == " << n
    << "\nn+1 == " << n+1
    << "\nn three times == " << n*3
    << "\nn doubled == " << n+n
    << "\nn squared == " << n*n
    << "\nhalf n == " << n/2
    << "\nsqrt of n == " << sqrt(n)
    << "\n";
}
