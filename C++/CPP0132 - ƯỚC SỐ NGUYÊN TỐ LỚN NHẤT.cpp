#include <iostream>
#include <cmath>
using namespace std;
int main(){ 
    int t; cin >> t;
    while (t--){
        long long n, k; cin >> n;
        for (int i = 2; i <= sqrt(n); i++){
            while (n % i == 0){
                n /= i;
                k = i;
            }
            if (n == 1) break;
        }
        if (n > 1) cout << n << endl;
            else cout << k << endl;
    }
    return 0;
}