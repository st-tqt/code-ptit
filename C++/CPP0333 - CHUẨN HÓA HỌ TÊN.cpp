#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string s; getline(cin, s);
    stringstream ss(s);
    string tmp[10];
    int d = 0;
    while (ss >> tmp[d]) d++;
    for (int i = 0; i < d - 1; i++){
        tmp[i][0] = toupper(tmp[i][0]);
        for (int j = 1; j < tmp[i].size(); j++) tmp[i][j] = tolower(tmp[i][j]);
        if (i == d - 2) cout << tmp[i] << ", ";
            else cout << tmp[i] << " ";
    }
    for (int i = 0; i < tmp[d - 1].size(); i++){
        tmp[d - 1][i] = toupper(tmp[d - 1][i]);
        cout << tmp[d - 1][i];
    } cout << endl;
    return 0;
}