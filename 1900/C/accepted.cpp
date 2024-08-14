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

int cost(map<int, pair<int, int>>& m, string& s, int cur) {
    if (cur == 0)
        return INT_MAX;
    //cout << "cur , scur : " << s[cur - 1] << endl;
    if (m[cur].first == 0 && m[cur].second == 0) {
        return 0;
    }
    int a = INT_MAX;
    if (m[cur].first != 0) {
        a = cost(m, s, m[cur].first) + 1;
        if (s[cur - 1] == 'L')
            a--;
    }
    int b = INT_MAX;
    if (m[cur].second != 0) {
        b = cost(m, s, m[cur].second) + 1;
        if (s[cur - 1] == 'R')
            b--;
    }
    return min(a, b);
}

void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    map<int, pair<int,int>> m;
    FORi(n) {
        int l, r; cin >> l >> r;
        m[i+1] = (pair<int, int>){ l, r };
    }
    cout << cost(m, s, 1) << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
