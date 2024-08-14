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
    int n, s, t; cin >> n >> s >> t;
    if (t == s) {
        cout << 0 << endl;
        return;
    }
    map<int, int> m;
    FORi(n) {
        int val; cin >> val;
        m[i + 1] = val;
    }
    int res = 1;
    int cur = m[s];
    while (cur != s && cur != t) {
        cur = m[cur];
        res++;
    }
    if (cur == s)
        cout << -1 << endl;
    else
        cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
