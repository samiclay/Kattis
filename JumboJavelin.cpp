#include<iostream>

using namespace std;

int main(){
  int N, l;
  cin >> N;

  int count = 0;
  for (int i = 0; i < N; i++){
    cin >> l;
    count += l;
  }

  cout << count - N + 1;
}
