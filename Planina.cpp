#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int num_squares, num_points;

  num_points = pow((sqrt(pow(4,N))+1),2);

  cout << num_points;
}
