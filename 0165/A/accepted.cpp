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
    FORi(n) {
        int a, b; cin >> a >> b;
        v[i] = (pair<int, int>){ a, b };
    }
    int res = 0;
    FORi(n) {
        pair<int, int> cur = v[i];
        bool cond1 = false;
        bool cond2 = false;
        bool cond3 = false;
        bool cond4 = false;
        FORj(n) {
            if (v[j].first == cur.first) {
                if (v[j].second < cur.second)
                    cond1 = true;
                if (v[j].second > cur.second)
                    cond2 = true;
            }
            if (v[j].second == cur.second) {
                if (v[j].first < cur.first)
                    cond3 = true;
                if (v[j].first > cur.first)
                    cond4 = true;
            }
        }
        if (cond1 && cond2 && cond3 && cond4)
            res++;
    }
    cout << res << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
