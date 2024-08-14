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

ll gcd(vector<ll>& vec, ll vsize)
{
    ll gcd = vec[0];
    for (int i = 1; i < vsize; i++)
    {
        gcd = __gcd(gcd, vec[i]);
    }
    return gcd;
}

void Solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    set<ll> s;
    FORi(n) {
        cin >> v[i];
        s.insert(v[i]);
    }
    ll maxi = v[0];
    ll indmaxi = 0; 
    FORi(n) {
        if (v[i] > maxi) {
            maxi = v[i];
            indmaxi = i;
        }
    }
    vector<ll> test(n);
    FORi(n) {
        test[i] = maxi - v[i];
    }
    test[indmaxi] = maxi - v[0];
    ll x = gcd(test, test.size());
    if (x < 1)
        x = 1;
    ll res = 0;
    FORi(n) {
        res += abs(maxi - v[i]) / x;
    }
    ll an1 = maxi - x;
    while (s.find(an1) != s.end())
        an1 -= x;
    if (abs(an1 - maxi) / x > n)
        res += n - 1;
    else
        res += abs(an1 - maxi) / x;
    cout << res << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
