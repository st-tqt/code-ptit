#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int m, n; cin >> m >> n;
        int a[m][n], b[m][n];
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        }
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (b[i][j] == 1){
                    for (int h = 0; h < m; h++) a[h][j] = 1;
                    for (int h = 0; h < n; h++) a[i][h] = 1;
                }
            }
        }
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++) cout << a[i][j] << " ";
            cout << endl;
        }        
    }
    return 0;
}