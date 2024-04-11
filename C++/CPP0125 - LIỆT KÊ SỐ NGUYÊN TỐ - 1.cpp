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
    int a, b; cin >> a >> b;
    if (a > b) swap(a, b);
    SangNt(); 
    for (int i = a; i <= b; i++){
        if (kt[i] == 0) cout << i << " ";
    }
    return 0;
}