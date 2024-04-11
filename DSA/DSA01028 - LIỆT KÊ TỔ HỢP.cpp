#include <iostream>
#include <set>
#define MAX 100
using namespace std;

int X[MAX], a[MAX], b[MAX], n, k;
bool ok[MAX];

void Try(int i){
	for (int j = X[i - 1] + 1; j <= n - k + i; j++){
		X[i] = j;
        b[i] = a[j];
		if (i == k) {
			for (int h = 1; h <= k; h++) cout << b[h] << " "; 
			cout << endl;
		}
		else{
			Try(i + 1);
		}
	}
}

int main(){
    set<int> s;
	cin >> n >> k;
	for (int i = 0; i < n; i++){
        int x; cin >> x;
        s.insert(x);
	}
    int d = 1;
	for (set<int>::iterator it = s.begin(); it != s.end(); it++){
        a[d++] = *it;
    }
    n = d - 1;
    Try(1);
}