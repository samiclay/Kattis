#include<iostream>

using namespace std;

int main(){
  int T,N;
  cin >> T;

  for (int i = 0; i < T; i++){
    cin >> N;

    if (N == 1) {
      cout << 1;
    }
    else if (N == 2){
      cout << 2;
    }
    else if (N == 3) {
      cout << 6;
    }
    else if (N == 4) {
      cout << 4;
    }
    else {
      cout << 0;
    }

    if (i != T-1) {
      cout << endl;
    }
  }
}
