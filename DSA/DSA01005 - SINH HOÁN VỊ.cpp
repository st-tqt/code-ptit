#include <iostream>
#include <iomanip>
#define MAX 100
using namespace std;

int X[MAX], n, k, dem = 0;
bool ok[MAX];

void Try(int i){
	for (int j = 1; j <= n; j++){
		if (ok[j]){
			ok[j] = false;
			X[i] = j;
			if (i == n) {
				for (int h = 1; h <= n; h++) cout << X[h]; 
				cout << " ";
			}
			else{
				Try(i + 1);
			}
			ok[j] = true;
		}
	}
}

int main(){
	int t; cin >> t;
	while (t--){
		cin >> n;
		for (int i = 1; i <= n; i++){
			X[i] = i;
			ok[i] = true;
		}
		Try(1); cout << endl;
	}
}
