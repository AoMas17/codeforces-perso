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
    vector<int> v(n + 1);
    FORi(n + 1)
        v[i] = -1;
    FORi(m) {
        int a, b, c; cin >> a >> b >> c;
        if (v[a] != -1) {
            v[b] = (v[a] + 1) % 3;
            v[c] = (v[b] + 1) % 3;
        }
        else if (v[b] != -1) {
            v[c] = (v[b] + 1) % 3;
            v[a] = (v[c] + 1) % 3;
        }
        else if (v[c] != -1) {
            v[a] = (v[c] + 1) % 3;
            v[b] = (v[a] + 1) % 3;
        }
        else {
            v[a] = 0;
            v[b] = 1;
            v[c] = 2;
        }
    }
    for (int i = 1; i < n + 1; i++)
        cout << v[i] + 1 << " ";
    cout << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
