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
    for (int i = 0; i < tmp[d - 1].size(); i++){
        tmp[d - 1][i] = tolower(tmp[d - 1][i]);
        cout << tmp[d - 1][i];
    }
    for (int i = 0; i < d - 1; i++){
        tmp[i][0] = tolower(tmp[i][0]);
        cout << tmp[i][0];
    }
    cout << "@ptit.edu.vn" << endl;
    return 0;
}