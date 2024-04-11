#include <iostream>
using namespace std;

int kt[1000000] = {0};

void SangNt(){
    kt[0] = 1; kt[1] = 1;
    for (int i = 2; i <= 1000; i++){
        if (kt[i] == 0){         
            for (int j = i*i; j <= 1000000; j += i) kt[j] = 1;
        }
    }
}

int main(){
    SangNt(); 
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int d = 0;
        if (kt[n - 2] == 0){
            cout << "2 " << n - 2 << endl;
            d = 1;
        } 
            else {
                for (int i = 3; i <= n/2; i += 2){
                    if (kt[i] == 0 && kt[n - i] == 0){
                        cout << i << " " << n - i << endl;
                        d = 1;
                        break;
                    }
                }
            }
        if (d == 0) cout << -1 << endl; 
    }
    return 0;
}