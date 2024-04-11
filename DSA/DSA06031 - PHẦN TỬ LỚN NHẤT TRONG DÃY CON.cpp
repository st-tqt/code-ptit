#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = k - 1; i < n; i++){
            int m = 0;
            for (int j = i - k + 1; j <= i; j++){
                if (m < a[j]) m = a[j];
            }
            cout << m << " ";
        }
        cout << endl;
    }
    return 0;
}