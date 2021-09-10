#include<iostream>

using namespace std;

int main()
{
	int N;
	cin >> N; 

	int t;
	bool stopped = true; 
	int temp;
	int timer = 0; 

	for (int i = 0; i < N; i++)
	{
		cin >> t; 
		if (stopped){
			stopped = false; 
			temp = t;
		}
		else {
			stopped = true; 
			timer += t - temp; 
		}
	}
	if (stopped) {
		cout << timer;
	}
	else {
		cout << "still running";
	}
}