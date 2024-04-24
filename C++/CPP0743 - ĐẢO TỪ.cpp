#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; getline(cin, s);
        stringstream ss(s);
        string tmp[20];
        int d = 0;
        while (ss >> tmp[d++]);
        for (int i = d - 1; i >= 0; i--) cout << tmp[i] << " ";
        cout << endl;
    }
}