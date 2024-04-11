#include <iostream>
#include <math.h>
using namespace std;

bool kt(long long n){
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i = 2; i <= ceil(sqrt(n)); i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int n; cin >> n;
    if (kt(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    return 0;
}
