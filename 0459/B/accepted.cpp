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
    ll mini = v[0];
    ll maxi = v[0];
    ll nbmin = 1;
    ll nbmax = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] == mini)
        {
            nbmin++;
        }
        if (v[i] == maxi)
        {
            nbmax++;
        }
        if (v[i] < mini)
        {
            mini = v[i];
            nbmin = 1;
        }
        if (v[i] > maxi)
        {
            maxi = v[i];
            nbmax = 1;
        }
    }
    cout << maxi - mini << " ";
    if (mini == maxi)
    {
        cout << (n * (n - 1)) / 2 << endl;
    }
    else
    {
        cout << nbmin * nbmax << endl;
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
