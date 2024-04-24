#include <bits/stdc++.h>
using namespace std;

void Try(string s, int n){
    if (s.size() == n) cout << s << " ";
    else {
        Try(s + "0", n);
        Try(s + "1", n);
    }
}

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        Try("", n);
        cout << endl;
    }
}