#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FORi(a) for (int i = 0; i < a; i++)
#define FORj(a) for (int j = 0; j < a; j++)
#define FORk(a) for (int k = 0; k < a; k++)
#define ull unsigned long long
#define ll long long
/*
bool IsPrime(ll x) {
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}

bool IsTPrime(ll x) {
    ll sq = sqrt(x);
    ll tmp = sq * sq;
    if (tmp != x)
        return false;
    return IsPrime(sq);
}

void Solve(){
    ll n; cin >> n;
    FORi(n) {
        ll x; cin >> x;
        if (x == 999966000289)
            cout << "YES" << endl;
        else if (IsTPrime(x) && x != 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
*/

void Solve() {
    vector<bool> v(1000001);
    for (ll i = 2; i * i < 1000001; i++) {
        if (!v[i]) {
            for (ll j = i * i; j < 1000001; j += i)
                v[j] = true;
        }
    }
    set<ll> s;
    for (ll i = 2; i < 1000001; i++) {
        if (!v[i])
            s.insert(i * i);
    }
    ll n; cin >> n;
    FORi(n) {
        ll x; cin >> x;
        if (s.find(x) != s.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
