#include <iostream>

bool kt(long long n){
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i = 2; i*i <= n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

using namespace std;
int main(){
    long long n; cin >> n;
    int d = 0;
    while (n % 2 == 0){
        d++;
        n /= 2;
    }
    if (d > 0) cout << "2 " << d << endl;
    int i = 3;
    while (n > 1 && kt(n) == false){
        d = 0;
        while (n % i == 0){
            d++;
            n /= i;
        }
        if (d > 0) cout << i << " " << d << endl;
        i += 2;
    }
    if (kt(n)) cout << n << " 1" << endl;
    return 0;
}