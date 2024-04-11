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
        if (n >= 4) cout << "4 ";
        for (int i = 3; i*i <= n; i += 2){
            if (kt[i] == 0) cout << i*i << " ";
        }
        cout << endl;
    }
    return 0;
}