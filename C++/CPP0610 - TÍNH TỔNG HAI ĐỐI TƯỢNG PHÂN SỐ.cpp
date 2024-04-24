#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    if (b == 0) return a;
    else return gcd(b, a % b);
}

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
        void rutgon(){
            long long x = gcd(tu, mau);
            tu /= x;
            mau /= x;
        }
        friend istream &operator >> (istream &is, PhanSo &a){
            is >> a.tu >> a.mau;
            return is;
        }
        friend ostream &operator << (ostream &os, PhanSo a){
            os << a.tu << "/" << a.mau;
            return os;
        }
        PhanSo operator + (PhanSo b){
            PhanSo a;
            a.tu = this->tu*b.mau + b.tu*this->mau;
            a.mau = this->mau*b.mau; 
            a.rutgon();
            return a;
        }
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}