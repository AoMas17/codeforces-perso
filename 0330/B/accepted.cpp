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
    int res = 1;
    FORi(m) {
        int a, b; cin >> a >> b;
        v[a] = 1;
        v[b] = 1;
        while (v[res] == 1)
            res++;
    }
    cout << n - 1 << endl;
    for (int i = 1; i < res; i++)
        cout << i << " " << res << endl;
    for (int i = res + 1; i <= n; i++)
        cout << i << " " << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
