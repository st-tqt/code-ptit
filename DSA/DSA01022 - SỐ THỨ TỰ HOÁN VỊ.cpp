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
	for (int j = 1; j <= n; j++){
		if (ok[j]){
			ok[j] = false;
			X[i] = j;
			if (i == n) {
				dem++;
                if (kt(X, a)){
                    cout << dem << endl;
                    return;
                }
			}
			else{
				Try(i + 1, dem);
			}
			ok[j] = true;
		}
	}
}

int main(){
	int t; cin >> t;
	while (t--){
		cin >> n;
        int dem = 0;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
			ok[i] = true;
		}
		Try(1, dem);
	}
}