#include<iostream>
#include<map>

using namespace std;

int main(){
  int T,n;
  string city;
  
  cin >> T;
  int d[T];
  for (int i = 0; i < T; i++){
    cin >> n;
    
    map<string,int> trip;
    
    for (int j = 0; j < n; j++){
      cin >> city;
      if (trip.count(city) == 0){
	trip.insert({city,1});
      }
    }
    d[i] = trip.size();
  }

  for (int i = 0; i < T; i++) {
    cout << d[i];
    if (i != T-1) {
      cout << endl;
    }
  }
}
