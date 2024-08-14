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
    int n, c; cin >> n >> c;
    vector<int> v(n);
    FORi(n)
        cin >> v[i];
    int m = v[0] - v[1];
    FORi(n - 1) {
        int diff = v[i] - v[i + 1];
        m = max(m, diff);
    }
    int res = m - c;
    if (res < 0)
        cout << 0 << endl;
    else
        cout << res << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
