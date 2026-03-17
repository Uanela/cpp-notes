#include <iostream>
#include <algorithm>
using namespace std;

class Token {
  public:
    char kind;
    double value;
};

Token get_token() {
  vector<char> operators = { "+", "-" };
  Token inputToken;
  string input;

  cin >> input;

  if (find(operators, operators.begin(), operators.end(), input)) {
    inputToken = Token{ kind : input, value = 8 }
  }





  return Token{ kind, value }
}

int main() {

  vector<Token> tokens;

  cout << "Let's do some calcs";

  while(cin) {
    Token token = get_token();
    tokens.push_back(token);
  }

  return 0;
}

