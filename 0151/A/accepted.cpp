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
    int n, k, l, c, d, p, nl, np; cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int alcool = k * l / nl;
    int limes = c * d;
    int salts = p / np;
    int res = min(alcool / n, limes / n);
    res = min(res, salts / n);
    cout << res << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
