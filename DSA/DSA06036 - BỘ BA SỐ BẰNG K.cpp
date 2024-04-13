#include <iostream>
#include <algorithm>
using namespace std;

bool kt(long long a[], int n, long long k){
    for (int i = 0; i < n - 2; i++){
        for (int j = i + 1; j < n - 1; j++){
            bool h = binary_search(a + j + 1, a + n, k - a[i] - a[j]);
            if (h) return true;
        }
    }
    return false;
}

int main(){
    int t; cin >> t;
    while (t--){
        int n; long long k; cin >> n >> k;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        if (kt(a, n, k)) cout << "YES" << endl;
            else cout << "NO" << endl;
    }
}