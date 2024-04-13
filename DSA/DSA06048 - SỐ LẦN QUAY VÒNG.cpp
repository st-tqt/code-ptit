#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int k = 0;
        for (int i = 1; i < n; i++){
            if (a[i] < a[i - 1]){
                k = i;
                break;
            }
        }
        cout << k << endl;
    }
}