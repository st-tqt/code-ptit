#include <iostream>
#include <cmath>
using namespace std;

int gcd(long long a, long long b){
    if (b == 0) return a;
        else return gcd(b, a % b);
}

int main(){ 
    int t; cin >> t;
    while (t--){
        long long n, k = 1; cin >> n;
        for (long long i = 2; i <= n; i++){
            long long x = gcd(k, i);
            k = (k * i) / x;
        }
        cout << k << endl;
    }
    return 0;
}