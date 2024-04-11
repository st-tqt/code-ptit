#include <iostream>
using namespace std;
int main(){ 
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int d = 0, i = 2;
        while (n > 1){
            while (n % i == 0){
                d++;
                if (d == k) break;
                n /= i;
            }
            if (d == k) break;
            i++;
        }
        if (d != k) cout << "-1" << endl;
            else cout << i << endl;
    }
    return 0;
}