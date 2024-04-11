#include <iostream>
#include <iomanip>
#define MAX 100
using namespace std;

int X[MAX], a[MAX], n, k;
bool ok[MAX];

bool kt(int *x, int *y){
    for (int i = 1; i <= n; i++){
        if (x[i] != y[i]) return false;
    }
    return true;
}

void Try(int i, int &dem){
	for (int j = X[i - 1] + 1; j <= n - k + i; j++){
		X[i] = j;
		if (i == k) {
            dem++;
			if (kt(X, a)){
                cout << dem << endl;
                return;
            }
		}
		else{
			Try(i + 1, dem);
		}
	}
}

int main(){
	int t; cin >> t;
	while (t--){
		cin >> n >> k;
        int dem = 0;
		for (int i = 1; i <= k; i++){
			X[i] = i;
            cin >> a[i];
		}
		Try(1, dem); 
	}
}
