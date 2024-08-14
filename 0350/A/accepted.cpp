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
    int n, m; cin >> n >> m;
    vector<int> v(n);
    vector<int> w(m);
    FORi(n) 
        cin >> v[i];
    FORi(m)
        cin >> w[i];
    int maxv = v[0];
    int minv = v[0];
    FORi(n) {
        if (v[i] > maxv)
            maxv = v[i];
        else if (v[i] < minv)
            minv = v[i];
    }
    int minw = w[0];
    FORi(m) {
        if (w[i] < minw)
            minw = w[i];
    }
    if (maxv >= minw || 2 * minv >= minw)
        cout << -1 << endl;
    else {
        if (maxv > 2 * minv)
            cout << maxv << endl;
        else
            cout << 2 * minv << endl;
    }
}
	
int main(){ 
    Solve();
    return 0;
}
