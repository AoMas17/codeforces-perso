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
    vector<ll> odd;
    vector<ll> even;
    FORi(n)
    {
        ll a; cin >> a;
        if (a % 2)
            odd.push_back(a);
        else
            even.push_back(a);
    }

    if (odd.size() == 0)
        cout << 0 << endl;


    else
    {
        ll res = 0;
        for (auto el : even)
            res += el;
        
        sort(odd.begin(), odd.end());
        FORi(odd.size() / 2 + odd.size() % 2)
        {
            res += odd[odd.size() - 1 - i];
        }

        cout << res << endl;
    }
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
