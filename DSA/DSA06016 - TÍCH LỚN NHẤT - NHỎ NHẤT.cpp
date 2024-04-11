#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        int a[n], b[m];
        long long max_a = 0, min_b = 2e8;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (max_a < a[i]) max_a = a[i];
        }
        for (int i = 0; i < m; i++){
            cin >> b[i];
            if (min_b > b[i]) min_b = b[i];
        }
        cout << max_a*min_b << endl;
    }
    return 0;
}