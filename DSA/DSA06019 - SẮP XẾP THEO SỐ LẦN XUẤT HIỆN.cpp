#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, d = 0; cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++){
            cin >> a[i]; b[i] = 1;
            for (int j = 0; j < i; j++){
                if (a[i] == a[j]){
                    b[i]++; b[j]++;
                }
            }
        }
        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                if ((b[i] < b[j]) || (b[i] == b[j] && a[i] > a[j])){
                    swap(a[i], a[j]);
                    swap(b[i], b[j]);
                }
            }
        }
        for (int i = 0; i < n; i++) cout << a[i] << " "; cout << endl;
    }
    return 0;
}