#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n;
        string s; cin >> n >> s;
        int d[10] = {0};
        for (char x : s){
            if (x == '2') d[2]++;
            else if (x == '3') d[3]++;
            else if (x == '4') d[3]++, d[2] += 2;
            else if (x == '5') d[5]++;
            else if (x == '6') d[5]++, d[3]++;
            else if (x == '7') d[7]++;
            else if (x == '8') d[7]++, d[2] += 3;
            else if (x == '9') d[7]++, d[3] += 2, d[2]++;
        }
        for (int i = 9; i >= 2; i--){
            for (int j = 1; j <= d[i]; j++) cout << i;
        }
        cout << endl;
    }
}