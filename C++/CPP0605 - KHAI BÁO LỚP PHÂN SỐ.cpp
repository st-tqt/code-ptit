#include <bits/stdc++.h>
using namespace std;

class PhanSo {
    public:
        long long tu, mau;
        PhanSo(long long tu, long long mau){
            this->tu = tu;
            this->mau = mau;    
        }
        PhanSo(){
            tu = mau = 0;
        }
        friend istream &operator >> (istream &is, PhanSo &a){
            is >> a.tu >> a.mau;
            return is;
        }
        void rutgon();
        friend ostream &operator << (ostream &os, PhanSo a){
            os << a.tu << "/" << a.mau << endl;
            return os;
        }
};

long long gcd(long long a, long long b){
    if (b == 0) return a;
    else return gcd(b, a % b);
}

void PhanSo::rutgon(){
    long long x = gcd(tu, mau);
    tu /= x;
    mau /= x; 
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}