#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, d = 0; cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] == 0) d++;
                else cout << a[i] << " ";
        }
        for (int i = 0; i < d; i++) cout << 0 << " "; cout << endl;
    }
    return 0;
}