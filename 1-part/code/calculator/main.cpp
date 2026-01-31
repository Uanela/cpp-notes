#include <iostream>

int main()
{
  std::cout << "Please enter your math operation (e.g: 2 / 2)\nAvailable operators: + - / * \nImportant: There must be a space between first_number operator second_number (e.g: 10 / 2).\n";
  double n1, n2;
  char operation;

  std::cin >> n1 >> operation >> n2;

  switch(operation)
  {
    case '+':
      std::cout << " = " << ( n1 + n2 );
      break;
    case '-':
      std::cout << " = " << ( n1 - n2 );
      break;
    case '*':
      std::cout << " = " << ( n1 * n2 );
      break;
    case '/':
      std::cout << " = " << ( n1 / n2 );
      break;
    default:
      std::cout << "Unknow operation " ;
      break;
  }

  return 0;
}
