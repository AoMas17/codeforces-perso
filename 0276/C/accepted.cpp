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

void Solve(){
    ll n, q; cin >> n >> q;
    vector<ll> v(n);
    FORi(n) cin >> v[i];

    vector<pair<ll, ll>> pre(n);
    FORi(q)
    {
        ll l, r; cin >> l >> r;
        pre[l - 1].first++;
        pre[r - 1].second++;
    }

    vector<pair<ll, ll>> freq(n);
    ll cur = 0;
    FORi(n)
    {
        cur += pre[i].first;
        freq[i] = make_pair(cur, i);
        cur -= pre[i].second;
    }

    sort(freq.begin(), freq.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
        return a.first < b.first;
        });
    
    sort(v.begin(), v.end());
    ll sum = 0;

    FORi(n)
    {
        sum += freq[n - i - 1].first * v[n - i - 1];
    }

    cout << sum << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
