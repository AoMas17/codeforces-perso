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
    ll n; cin >> n;
    vector<ll> v(n);
    FORi(n)
        cin >> v[i];
    
    vector<ll> pref_max(n);
    ll maxi = v[0];
    FORi(n)
    {
        maxi = max(maxi, v[i]);
        pref_max[i] = maxi;
    }

    for (int i = 1; i < n; i += 2)
    {
        v[i] = pref_max[i];
    }

    ll res = 0;
    if (v[0] >= v[1])
        res += v[0] - v[1] + 1;

    for (int i = 2; i < n; i += 2)
    {
        if (v[i] >= v[i - 1])
        {
            res += v[i] - v[i - 1] + 1;
            v[i] = v[i - 1] - 1;
        }

        if (i + 1 < n)
        {
            if (v[i] >= v[i + 1])
            {
                res += v[i] - v[i + 1] + 1;
                v[i] = v[i + 1] - 1;
            }
        }
    }

    cout << res << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
