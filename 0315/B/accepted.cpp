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
    ll n, m; cin >> n >> m;\
    vector<ll> v(n);
    FORi(n) cin >> v[i];
    vector<ll> when(n);
    vector<ll> values;
    values.push_back(0);
    
    FORi(m)
    {
        //for (auto el : when) cout << el << ' '; cout << endl;
        int t; cin >> t;

        if (t == 1)
        {
            ll vi, x; cin >> vi >> x;
            v[vi - 1] = x;
            when[vi - 1] = values.size() - 1;
        }

        else if (t == 2)
        {
            ll y; cin >> y;
            values.push_back(y + values.back());
        }

        else
        {
            ll q; cin >> q;
            ll res = v[q - 1] + values[values.size() - 1] - values[when[q - 1]];
            cout << res << endl;
        }
    }
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
