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
    ll stock = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] < i)
        {
            if (v[i] + stock < i)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                stock -= (i - v[i]);
            }
        }
        else
        {
            stock += v[i] - i;
            v[i] = i;
        }
    }

    cout << "YES" << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
