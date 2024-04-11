#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n, dem = 0; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++){
            int h = i;
            for (int j = i + 1; j < n; j++){
                if (a[h] > a[j]) h = j;
            }
            if (h != i){
                swap(a[i], a[h]);
                dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}