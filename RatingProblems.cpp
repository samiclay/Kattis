#include<iostream>

using namespace std;

int main()
{
	double n,k;
	cin >> n >> k;

	int tot = 0;
	for (int i = 0; i < k; i++)
	{
		double k;
		cin >> k;
		tot += k;
	}
	cout << double((tot + ((-3)*(n-k)))/n) << " " << double((tot + (3*(n-k)))/n);
}
