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
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    FORi(n)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll res = 0;
    while (res * 3 + 2 < n && v[res * 3 + 2] + k <= 5)
        res++;
    cout << res << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
