#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, d = 0, m = 0; cin >> n;
        cin.ignore();
        string s; getline(cin, s);
        vector<string> x;
        for (int i = 0; i < s.size(); i++){
            if (isdigit(s[i])){
                string p; p += s[i];
                for (int j = 0; j < d; j++){
                    if (s[i] > x[j][x[j].size() - 1] && p.size() == x[j].size()) p = x[j] + s[i];
                }
                x.push_back(p);
                d++;
                if (m < p.size()) m = p.size();
            }
        }
        for (int i = d - 1; i >= 0; i--){
            if (x[i].size() == m){
                for (int j = 0; j < x[i].size(); j++) cout << x[i][j] << " "; cout << endl;
                break;
            }
        }
    }
    return 0;
}