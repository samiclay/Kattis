#include<iostream>

using namespace std;

int main(){
  int n,t;
  cin >> n;
  int count = 0;
  for (int i = 0; i < n; i++) {
    cin >> t;
    if (t < 0) {
      count++;
    }
  }
  cout << count;
}
