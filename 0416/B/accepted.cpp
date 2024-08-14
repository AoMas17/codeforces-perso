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
    int m, n; cin >> m >> n;
    vector<vector<int>> tab(m);
    FORi(m) {
        vector<int> v(n);
        FORj(n)
            cin >> v[j];
        tab[i] = v;
    }
    for (int i = 1; i < m; i++)
        tab[i][0] += tab[i - 1][0];
    for (int i = 1; i < n; i++)
        tab[0][i] += tab[0][i - 1];
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            tab[i][j] += max(tab[i - 1][j], tab[i][j - 1]);
        }
    }
    FORi(m)
        cout << tab[i][n - 1] << " ";
    cout << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
