#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int kt[n + 1] = {0};
        for (int i = 1; i < n; i++){
            int x; cin >> x;
            kt[x] = 1;
        }
        for (int i = 1; i <= n; i++){
            if (kt[i] == 0){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}