#include<iostream>
#include<map>

using namespace std;

int main(){
  //input variable
  string input; 

  //Define a map for the word counts
  map<string,int> words;

  while(cin >> input){
    if (words.count(input) == 0){
      words.insert({input,1});
    }
    else {
      cout << "no";
      return 0;
    }
  }

  cout << "yes";
}
