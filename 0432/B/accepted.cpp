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
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    map<int, int> m;
    FORi(n) {
        int a, b; cin >> a >> b;
        m[a]++;
        v[i] = make_pair(a, b);
    }
    vector<pair<int, int>> res(n);
    FORi(n) {
        int pb = m[v[i].second];
        int home = n - 1 + pb;
        int away = n - 1 - pb;
        res[i] = make_pair(home, away);
    }
    for (auto el : res)
        cout << el.first << " " << el.second << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
