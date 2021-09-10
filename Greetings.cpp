#include<iostream>

using namespace std;

int main(){
  string hey;
  cin >> hey;

  int count = 0;
  
  for (int i = 0; i < hey.length(); i++){
    if (hey[i] == 'e'){
      count++;
    }
  }

  cout << "h";
  for (int i = 0; i < count; i++){
    cout << "ee";
  }
  cout << "y";
}
