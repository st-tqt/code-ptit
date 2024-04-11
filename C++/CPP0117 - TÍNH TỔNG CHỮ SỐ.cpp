#include <iostream>
using namespace std;

int tong(long long n){
    int k = 0;
    while (n > 0){
        k = k + (n % 10);
        n /= 10; 
    }
    return k;
}

int main(){
    int t; cin >> t;
    while (t--){
        long long n; cin >> n;
        while (n >= 10) n = tong(n);
        cout << n << endl;
    }
    return 0;
}