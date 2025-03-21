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
    {
        cin >> v[i];
    }

    ll min = LLONG_MAX;

    for (ll i = 0; i < 1 << n; i++)
    {
        ll suml = 0;
        ll sumr = 0;
        for (int j = 0; j < n; j++)
        {
            if (i >> j & 1)
                suml += v[j];
            else
                sumr += v[j];
        }
        min = std::min(min, abs(suml - sumr));
    }
    cout << min << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
