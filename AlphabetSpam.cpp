#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main() {
  double whitespace = 0;
  double lowercase = 0;
  double uppercase = 0;
  double symbol = 0;

  string input;
  cin >> input;

  for (int i = 0; i < input.length(); i++){
    char c = input[i];
    if (c == '_') {
      whitespace++;
    }
    else if (islower(c)) {
      lowercase++;
    }
    else if (isupper(c)) {
      uppercase++;
    }
    else {
      symbol++;
    }
  }

  cout << setprecision(10)
       << whitespace/double(input.length()) << endl
       << lowercase/double(input.length()) << endl
       << uppercase/double(input.length()) << endl
       << symbol/double(input.length());
}
