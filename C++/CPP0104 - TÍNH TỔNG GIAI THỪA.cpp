#include <iostream>
using namespace std;

long long gt(int x){
	if (x == 1) return 1;
		else return gt(x - 1) * x;
}

int main(){
	int n; cin >> n;
	long long s = 0;
	for (int i = 1; i <= n; i++) s += gt(i);
	cout << s; 
}