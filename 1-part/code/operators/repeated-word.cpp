#include "../lib/std_facilities.h"

int main()
{
  int number_of_words = 0;
  string prev = " ";
  string curr;
  while (cin >> curr){
    ++number_of_words;
    if (prev == curr)
      cout << "Word number " << number_of_words
        << "\nRepeated word " << curr << "\n";
    prev = curr;
  }
}
