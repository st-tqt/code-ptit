#include <iostream>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--){
		long long n; cin >> n;
    	long long d = ((n + 1)*n)/2;
		cout << d << endl;
	}
}