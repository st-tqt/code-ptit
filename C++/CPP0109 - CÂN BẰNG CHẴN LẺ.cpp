#include <iostream>
#include <sstream>
using namespace std;

bool kt(int n){
    int d = 0;
    while (n > 0){
        int k = n % 10;
        if (k % 2 == 0) d++;
            else d--;
        n /= 10;
    }
    if (d == 0) return true;
        else return false;
}

int main(){
    int n; cin >> n;
    int l = 1, r = 9;
    for (int i = 1; i < n; i++){
        l *= 10; r = r * 10 + 9;
    }
    int d = 0;
    for (int i = l; i <= r; i++){
        if (kt(i)){
            cout << i << " ";
            d++;
            if (d % 10 == 0) cout << endl;
        }
    }
    return 0;
}