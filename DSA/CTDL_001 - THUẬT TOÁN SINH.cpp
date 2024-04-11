#include <iostream>
using namespace std;

int n;

void Try(string s, int i){
    if (i == n/2){
        if (n % 2== 0){
            for (int j = 0; j < s.size(); j++) cout << s[j] << " ";
            for (int j = s.size() - 1; j >= 0; j--) cout << s[j] << " ";
            cout << endl;
        }
        else {
            for (int j = 0; j < s.size(); j++) cout << s[j] << " "; cout << "0 ";
            for (int j = s.size() - 1; j >= 0; j--) cout << s[j] << " ";
            cout << endl;
            for (int j = 0; j < s.size(); j++) cout << s[j] << " "; cout << "1 ";
            for (int j = s.size() - 1; j >= 0; j--) cout << s[j] << " ";
            cout << endl;
		}
    }
    else {
        Try(s + "0", i + 1);
        Try(s + "1", i + 1);
    }
}

int main(){
    cin >> n;
    Try("", 0);
}
