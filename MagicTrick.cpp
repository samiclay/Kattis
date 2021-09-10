#include<iostream>
#include<string>

using namespace std;

int main(){
  //Input the order of the cards
  string cards;
  cin >> cards;

  for (int i = 0; i < cards.length(); i++){
    string letter = cards.substr(i,1);
    int l = cards.length();
    string compare = cards.substr(i+1,l-(i+1));

    if (compare.find(letter) != string::npos){
      cout << 0;
      return 0;
    }
  }

  cout << 1;
  return 0;
}
