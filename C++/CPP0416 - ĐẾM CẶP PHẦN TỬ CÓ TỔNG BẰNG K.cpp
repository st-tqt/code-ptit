#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k, d = 0; cin >> n >> k;
        int a[n];
        for (int i  = 0; i < n; i++){
            cin >> a[i];
            for (int j = 0; j < i; j++){
                if (a[i] + a[j] == k) d++;
            }
        }
        cout << d << endl;
    }
    return 0;
}