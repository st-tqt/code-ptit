#include<bits/stdc++.h>
using namespace std;

struct PhanSo {
    long long tu, mau;
};

long long gcd(long long a, long long b){
    if (b == 0) return a;
    else return gcd(b, a % b);
}

void nhap(PhanSo &p){
    cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p){
    long long x = gcd(p.tu, p.mau);
    p.tu /= x;
    p.mau /= x;
}

void in(PhanSo p){
    cout << p.tu << "/" << p.mau << endl;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}