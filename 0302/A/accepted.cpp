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
    ll cnt = 0;
    for (ll i = 0; i < n; i++) {
        int x; cin >> x;
        if (x == 1)
            cnt++;
    }
    ll limit = min(cnt, n - cnt) * 2;
    ll l, r;
    ll nb;
    while(m--) {
        cin >> l >> r;
        nb = r - l + 1;
        if (limit >= nb && nb % 2 == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}
	
int main(){ 
    init
    Solve();
    return 0;
}
