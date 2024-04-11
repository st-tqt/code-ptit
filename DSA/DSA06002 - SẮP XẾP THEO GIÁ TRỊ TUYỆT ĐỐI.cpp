#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n, x; cin >> n >> x;
        int a[n], b[n], c[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = abs(a[i] - x);
            c[i] = i;
            if (i > 0){
                int tmp1 = b[i], tmp2 = c[i], j = i - 1;
                while (tmp1 < b[j] && j >= 0){
                    b[j + 1] = b[j];
                    c[j + 1] = c[j];
                    j--;
                }
                b[j + 1] = tmp1; c[j + 1] = tmp2;
            }
        }
        for (int i = 0; i < n; i++) cout << a[c[i]] << " "; cout << endl;
    }
}