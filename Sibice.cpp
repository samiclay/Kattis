#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int N,W,H;

	cin >> N >> W >> H;

	double max = sqrt(pow(W,2) + pow(H,2));

	int match;

	for (int i = 0; i < N; i++){
		cin >> match;
		if (match <= max){
			cout << "DA";
		}
		else {
			cout << "NE";
		}
		if (i != N-1){
			cout << endl;
		}
	}
}