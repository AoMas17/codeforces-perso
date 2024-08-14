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
    int n, x, y; cin >> n >> x >> y;
    x += 10001;
    y += 10001;
    vector<pair<int, int>> v(n);
    FORi(n) {
        int a, b; cin >> a >> b;
        v[i] = make_pair(a + 10001, b + 10001);
    }
    int res = 0;
    while (v.size() > 0) {
        res++;
        int tx = v[0].first;
        int ty = v[0].second;
        double rx = tx - x;
        double ry = ty - y;
        v.erase(v.begin());
        vector<int> toerase;
        FORi(v.size()) {
            int nx = v[i].first;
            int ny = v[i].second;
            if ((ny - y) * rx == (nx - x) * ry) {
                toerase.push_back(i - toerase.size());
            }
        }
        for (int el : toerase) {
            v.erase(v.begin() + el);
            //cout << el << " ";
        }
        //cout << endl;
    }
    cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
