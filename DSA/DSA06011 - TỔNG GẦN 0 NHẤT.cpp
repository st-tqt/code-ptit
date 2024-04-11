#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, m = 2e6; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i  = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                int sum = a[i] + a[j];
                if (abs(sum) < abs(m)) m = sum;
            }
        }
        cout << m << endl;
    }
    return 0;
}