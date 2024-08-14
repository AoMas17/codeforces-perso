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
    int r, c; cin >> r >> c;
    set<int> lines;
    set<int> cols;
    FORi(r) {
        string s; cin >> s;
        FORj(c) {
            if (s[j] == 'S') {
                lines.insert(i);
                cols.insert(j);
            }
        }
    }
    int res = 0;
    FORi(r) {
        FORj(c) {
            if (lines.find(i) == lines.end() || cols.find(j) == cols.end())
                res++;
        }
    }
    cout << res << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
