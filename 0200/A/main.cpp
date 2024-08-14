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
    int n, m, k; cin >> n >> m >> k;
    vector<int> v(2 * k);
    FORi(k) {
        int a, b; cin >> a >> b;
        v[2 * i] = a - 1;
        v[2 * i + 1] = b - 1;
    }
    vector<vector<int>> tab(n);
    FORi(n) {
        vector<int> tmp(m);
        tab[i] = tmp;
    }
    vector<vector<pair<int, int>>> closest(n);
    FORi(n) {
        vector<pair<int, int>> tmp(m);
        FORj(m) {
            tmp[j] = make_pair(i, j);
        }
        closest[i] = tmp;
    }
    //vector<pair<int, int>> res(k);
    FORi(k) {
        int x1 = v[2 * i];
        int y1 = v[2 * i + 1];
        int x2 = closest[x1][y1].first;
        int y2 = closest[x1][y1].second;
        int dist = abs(x2 - x1) + abs(y2 - y1);
        while (!(0 <= x2 && x2 < n && 0 <= y2 && y2 < m) || tab[x2][y2]) {
            if (x2 - x1 == dist) {
                dist++;
                y2 = y1;
                x2 = x1 - dist;
            }
            else if (x2 < x1 || (x2 == x1 && y2 < y1)) {
                if (y2 >= y1) {
                    x2++;
                    y2 = y1 - (dist - abs(x2 - x1));
                }
                else {
                    y2 = y1 + abs(y1 - y2);
                }
            }
            else {
                if (y2 > y1) {
                    x2++;
                    y2 = y1 - (dist - abs(x2 - x1));
                }
                else {
                    y2 = y1 + abs(y1 - y2);
                }
            }
        }
        closest[x1][y1] = make_pair(x2, y2);
        tab[x2][y2] = 1;
        cout << x2 + 1 << " " << y2 + 1 << endl;
        //res[i] = make_pair(x2 + 1, y2 + 1);
    }
    //FORi(k) {
    //    cout << res[i].first << " " << res[i].second << endl;
    //}
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
