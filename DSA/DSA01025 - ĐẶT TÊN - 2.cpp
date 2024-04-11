#include <iostream>
#include <iomanip>
#define MAX 100
using namespace std;

int X[MAX], n, k, dem = 0;
bool ok[MAX];

void Try(int i){
	for (int j = X[i - 1] + 1; j <= n - k + i; j++){
		X[i] = j;
		if (i == k) {
			for (int h = 1; h <= k; h++){
                char c = 'A' + X[h] - 1;
                cout << c;
            } cout << endl; 
		}
		else{
			Try(i + 1);
		}
	}
}

int main(){
	int t; cin >> t;
	while (t--){
		cin >> n >> k;
		for (int i = 1; i <= k; i++){
			X[i] = i;
		}
		Try(1); 
	}
}