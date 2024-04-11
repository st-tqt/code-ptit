#include <iostream>
using namespace std;
int main(){ 
    int t; cin >> t;
    while (t--){
        long long n, k; cin >> n >> k;
        long long d = 0;
        for (int i = 1; i <= n; i++) d += i % k;
        if (d == k) cout << 1 << endl;
            else cout << 0 << endl;
    }
    return 0;
}