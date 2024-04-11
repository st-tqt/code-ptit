#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;

int X[MAX], a[MAX], n, k;
bool ok[MAX];

void Try(int i){
	for (int j = 1; j <= n; j++){
		if (ok[j]){
			ok[j] = false;
			X[i] = a[j];
			if (i == n) {
				for (int h = 1; h <= n; h++) cout << X[h] << " "; 
                cout << endl;
			}
			else{
				Try(i + 1);
			}
			ok[j] = true;
		}
	}
}

int main(){
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		ok[i] = true;
    }
    sort(a + 1, a + n + 1);
	Try(1); 
}