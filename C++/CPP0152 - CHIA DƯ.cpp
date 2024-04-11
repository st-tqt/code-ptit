#include <iostream>
using namespace std;
int main(){ 
    int t; cin >> t;
    while (t--){
        int a, m, d = 0; cin >> a >> m;
        for (int i = 1; i < m; i++){
            if (i * a % m == 1){
                cout << i << endl;
                d = 1;
                break;
            }
        }
        if (d == 0) cout << -1 << endl;
    }
    return 0;
}