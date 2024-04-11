#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n, d1 = 0, d2 = 0; cin >> n;
	long long a[n], b[n/2 + 1], c[n/2 + 1];
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (i % 2 == 0) b[d1++] = a[i];
			else c[d2++] = a[i];
	}
	sort(b, b + d1); 
	sort(c, c + d2);
	d1 = 0; 
	for (int i = 0; i < n; i++){
		if (i % 2 == 0) cout << b[d1++] << " ";
			else cout << c[--d2] << " ";
	}
	return 0;
}
