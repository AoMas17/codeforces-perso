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
    ll r, x, y, a, b; cin >> r >> x >> y >> a >> b;
    double dist = sqrt((a - x) * (a - x) + (b - y) * (b - y));
    ull res = dist / (r * 2);
    if (res * r * 2 < dist)
        res++;
    cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
