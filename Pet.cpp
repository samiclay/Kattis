#include<iostream>

using namespace std;

int main(){
  int contestant = 0;
  int tempContestant = contestant;
  int grade = 0;
  int tempGrade = grade;

  for(int j = 0; j < 5; j++){
    tempContestant++;
    tempGrade = 0;
    for (int i = 0; i < 4; i++){
      int g;
      cin >> g;
      tempGrade += g;
    }
    if (tempGrade > grade){
      grade = tempGrade;
      contestant = tempContestant;
    }
  }
  cout << contestant << " " << grade;
}
