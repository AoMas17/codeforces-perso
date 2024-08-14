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
    if (m == 0) {
        cout << "YES" << endl;
        return;
    }
    vector<int> v(m);
    FORi(m)
        cin >> v[i];
    sort(v.begin(), v.end());
    if (v[0] == 1 || v[m - 1] == n) {
        cout << "NO" << endl;
        return;
    }
    FORi(m - 2) {
        if (v[i] == v[i + 1] - 1 && v[i + 1] == v[i + 2] - 1) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
