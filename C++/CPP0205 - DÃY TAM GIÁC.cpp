#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        long long n, m = 0; cin >> n;
        for (long long i = 0; i < n; i++){
            long long x; cin >> x;
            if (m < x) m = x;
        }
        cout << m << endl;
    }
    return 0;
}