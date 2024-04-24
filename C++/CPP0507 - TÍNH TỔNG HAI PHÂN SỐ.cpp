#include<bits/stdc++.h>
using namespace std;
typedef long long ll;  

struct PhanSo {
    ll tu, mau;
};

ll gcd(ll a, ll b){
    if (b == 0) return a;
    else return gcd(b, a % b);
}

void nhap(PhanSo &a){
    cin >> a.tu >> a.mau;
}

PhanSo tong(PhanSo a, PhanSo b){
    ll x = gcd(a.mau, b.mau);
    x = (a.mau*b.mau)/x;
    PhanSo k;
    k.tu = a.tu*(x/a.mau) + b.tu*(x/b.mau);
    k.mau = x;
    x = gcd(k.tu, k.mau);
    k.tu /= x; k.mau /= x;
    return k; 
}

void in(PhanSo a){
    cout << a.tu << "/" << a.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}