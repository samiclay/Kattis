#include<iostream>
#include<string>

using  namespace std;

int power(int n, int p)
{
	int prod = 1; 
	for (int i = 0; i < p; i++)
	{
		prod = prod * n;
	}
	return prod;
}

int main()
{
	int N;
	cin >> N;

	string P[N];
	int num[N];
	int pow[N];
	int X = 0; 

	for (int i = 0; i < N; i++)
	{
		cin >> P[i];
		num[i] = stoi(P[i].substr(0,P[i].length()-1));
		pow[i] = stoi(P[i].substr(P[i].length()-1,1));
		X += power(num[i],pow[i]);
	}

	cout << X;

	return 0;
}