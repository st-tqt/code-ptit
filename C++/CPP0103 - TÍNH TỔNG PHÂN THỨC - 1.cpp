#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
int main(){
	double s = 0; 
	int n; cin >> n;
	for (int i = 1; i <= n; i++) s += ((double) 1/i) * 100000;
	long long k = s;
	string p;
	stringstream ss;
	ss << k;
	p = ss.str(); 
	for (int i = 0; i < p.size() - 5; i++) cout << p[i]; cout << ".";
	for (int i = p.size() - 5; i < p.size() - 1; i++) cout << p[i];
}