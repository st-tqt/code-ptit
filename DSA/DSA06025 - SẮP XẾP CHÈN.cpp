#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
        int j = i - 1;
        while (j >= 0 && a[i] < b[j]){
            b[j + 1] = b[j];
            j--;
        }
        b[j + 1] = a[i];
        cout << "Buoc " << i << ": ";
        for (int j = 0; j <= i; j++) cout << b[j] << " "; cout << endl;
    }
    return 0;
}