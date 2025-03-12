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
    ll n, m; cin >> n >> m;
    vector<ll> v(n);
    FORi(n) cin >> v[i];

    set<ll> s;
    vector<ll> dp(n);

    FORi(n)
    {
        s.insert(v[n - i - 1]);
        dp[n - i - 1] = s.size();
    }

    FORi(m)
    {
        ll a; cin >> a;
        cout << dp[a - 1] << endl;
    }
}
	
int main(){ 
    Solve();
    return 0;
}
