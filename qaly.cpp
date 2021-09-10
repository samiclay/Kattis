#include<iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	double q[N];
	double y[N];

	double sum = 0;

	for(int i = 0; i < N; i++)
	{
		cin >> q[i];
		cin >> y[i]; 
		sum += q[i] * y[i];
		
	}

	cout << sum; 
}