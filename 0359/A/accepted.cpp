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
    vector<vector<ll>> v(n);
    FORi(n) {
        vector<ll> w(m);
        FORj(m) {
            cin >> w[j];
        }
        v[i] = w;
    }
    bool goodside = false;
    FORi(n) {
        FORj(m) {
            if (v[i][j] && (i == 0 || i == n - 1 || j == 0 || j == m - 1))
                goodside = true;
        }
    }
    if (goodside)
        cout << 2 << endl;
    else
        cout << 4 << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
