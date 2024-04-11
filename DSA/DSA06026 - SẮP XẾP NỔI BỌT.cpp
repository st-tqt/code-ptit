#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++){
        int d = 0;
        for (int j = 1; j < n - i; j++){
            if (a[j] < a[j - 1]) swap(a[j], a[j - 1]);
        }
        cout << "Buoc " << i + 1 << ": ";
        for (int j = 0; j < n; j++){
            if (j > 0 && a[j] < a[j - 1]) d = 1;
            cout << a[j] << " ";
        } 
        cout << endl;
        if (d == 0) break;
    }
    return 0;
}