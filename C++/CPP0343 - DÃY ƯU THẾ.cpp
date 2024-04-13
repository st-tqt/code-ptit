#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; getline(cin, s);
        vector<int> a;
        stringstream ss(s);
        int x, d = 0;
        while (ss >> x){
            a.push_back(x);
            if (x % 2 == 0) d++;
                else d--;
        }
        if ((d > 0 && a.size() % 2 == 0) || (d < 0 && a.size() % 2 == 1)) cout << "YES" << endl;
            else cout << "NO" << endl;
    }
    return 0;
}