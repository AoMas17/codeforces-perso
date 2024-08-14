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
    set<int> cols;
    set<int> lines;
    FORi(m) {
        FORj(n) {
            if (!tab[i][j]) {
                cols.insert(j);
                lines.insert(i);
            }
        }
    }
    vector<vector<int>> res(m);
    set<int> colsbis;
    set<int> linesbis;
    FORi(m) {
        vector<int> v(n);
        if (lines.find(i) == lines.end()) {
            FORj(n) {
                if (cols.find(j) == cols.end()) {
                    v[j] = 1;
                    colsbis.insert(j);
                    linesbis.insert(i);
                }
            }
        }
        res[i] = v;
    }

    vector<vector<int>> test(m);
    FORi(m) {
        vector<int> v(n);
        FORj(n) {
            if (colsbis.find(j) != colsbis.end() || linesbis.find(i) != linesbis.end()) {
                v[j] = 1;
            }
        }
        test[i] = v;
    }
    if (test == tab) {
        cout << "YES" << endl;
        for (vector<int> line : res) {
            for (int el : line)
                cout << el << " ";
            cout << endl;
        }
    }
    else
        cout << "NO" << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
