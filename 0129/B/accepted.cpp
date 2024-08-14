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
    map<int, set<int>> l;
    FORi(m) {
        int a, b; cin >> a >> b;
        l[a].insert(b);
        l[b].insert(a);
    }
    int res = 0;
    bool cond = true;
    vector<int> v;
    while (cond) {
        v = {};
        for (auto el : l) {
            if (el.second.size() == 1) {
                v.push_back(el.first);
            }
        }
        cond = (v.size() != 0);
        for (auto pa : l) {
            for (auto el : v) {
                l[pa.first].erase(el);
            }
        }
        for (auto el : v) {
            l.erase(el);
        }
        if (cond)
            res++;
    }
    cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
