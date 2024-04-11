#include <iostream>
#include <sstream>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; getline(cin, s);
        stringstream ss(s);
        int d = 0;
        string tmp;
        while (ss >> tmp) d++;
        cout << d << endl;
    }
    return 0;
}