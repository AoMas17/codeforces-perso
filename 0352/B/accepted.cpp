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
    vector<pair<int,int>> v(n);
    FORi(n) {
        int a; cin >> a;
        v[i] = make_pair(a, i);
    }
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b)
        {
            if (a.first == b.first)
                return a.second < b.second;
            else
                return a.first < b.first;
        });
    int i = 0;
    vector <pair<int, int>> res;
    while (i < n) {
        int cur = v[i].first;
        if (i + 1 == n || v[i + 1].first != cur) {
            res.push_back(make_pair(cur, 0));
        }
        else {
            int step = v[i + 1].second - v[i].second;
            bool cond = true;
            while (i + 1 < n && v[i].first == v[i + 1].first) {
                if (v[i + 1].second - v[i].second != step) {
                    cond = false;
                    while (i + 1 < n && v[i].first == v[i + 1].first)
                        i++;
                    break;
                }
                i++;
            }
            if (cond)
                res.push_back(make_pair(cur, step));
        }
        i++;
    }
    cout << res.size() << endl;
    for (auto el : res) {
        cout << el.first << " " << el.second << endl;
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
