#include <iostream>
#include <string>
using namespace std;

int tong(int n){
    if (n < 2) return 0;
    if (n == 2) return 1;
    else return tong(n - 1) + (n - 1);
}

int main(){
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; cin >> s;
        int a[26] = {0};
        for (int i = 0; i < s.size(); i++) a[s[i] - 97]++;
        long long k = s.size();
        for (int i = 0; i < 26; i++) k += tong(a[i]);
        cout << k << endl;
    }
    return 0;
}