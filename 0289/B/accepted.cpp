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
    ll n, m, d; cin >> n >> m >> d;
    ll l = n * m;
    vector<int> v(l);
    FORi(l)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll ref = v[0] % d;
    FORi(l) {
        if (v[i] % d != ref) {
            cout << -1 << endl;
            return;
        }
    }
    ll mid = v[l / 2];
    ll res = 0;
    for (ll el : v) {
        res += (abs(el - mid) / d);
    }
    cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
