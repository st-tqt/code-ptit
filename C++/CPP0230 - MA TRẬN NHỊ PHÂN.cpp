#include <iostream>
#include <algorithm>
using namespace std;
int main(){
        int n, dem = 0; cin >> n;
        int a[n][3];
        for (int i = 0; i < n; i++){
            int d = 0;
            for (int j = 0; j < 3; j++){
                cin >> a[i][j];
                if (a[i][j] == 1) d++;
            }
            if (d >= 2) dem++;
        }       
        cout << dem << endl;
    return 0;
}