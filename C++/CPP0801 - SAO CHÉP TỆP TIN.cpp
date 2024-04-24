#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream fi; fi.open("PTIT.in");
    ofstream fo; fo.open("PTIT.out");
    string s;
    while (getline(fi, s)) fo << s << endl;
    fi.close();
    fo.close();
    return 0;
}