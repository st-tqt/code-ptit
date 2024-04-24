#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Mul(ll a, ll b, ll p)
{
    if (b == 1)
        return a;
    ll t = Mul(a, b / 2, p);
    ll r = 2 * t;
    if (b % 2 == 1)
        return (r + a) % p;
    return r % p;
}

ll Pow(ll a, ll b, ll p)
{
    if (b == 1)
        return a % p;
    ll t = Pow(a, b / 2, p);
    ll r = Mul(t, t, p);
    if (b % 2 == 1)
        return r * a % p;
    return r % p;
}

int main(){
    int t; cin >> t;
    while (t--){
        ll x, y, p; cin >> x >> y >> p;
        cout << Pow(x, y, p) << endl;
    }
}