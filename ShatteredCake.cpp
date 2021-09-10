#include<iostream>

using namespace std;

int main(){
  int W,N;

  cin >> W >> N;

  int w,l;
  int area = 0;
  for (int i = 0; i < N; i++)
  {
   cin >> w >> l;
   area += w * l;
  }

  cout << area / W; 
}
