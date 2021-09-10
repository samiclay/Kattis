#include<iostream>

using namespace std;

int main()
{
	int X,N;

	cin >> X >> N;

	int P[N];
	int res = X;

	for (int i = 0; i < N; i++) 
	{
		cin >> P[i];
		res = X + (res - P[i]);
	}
	cout << res;
}