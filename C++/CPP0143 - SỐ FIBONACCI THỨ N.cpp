#include <iostream>
#include <vector>
using namespace std;

vector<long long> v;

void fibo(){
    v.push_back(0); v.push_back(1); v.push_back(1);
    for (int i = 3; i <= 92; i++) v.push_back(v[i - 1] + v[i - 2]);
}

int main(){ 
    fibo();
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        cout << v[n] << endl;
    }
    return 0;
}