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

string update(string s, int n) {
    string res = s;
    for (int i = 1; i < n; i++) {
        if (s[i] == 'G' && s[i - 1] == 'B') {
            res[i - 1] = 'G';
            res[i] = 'B';
        }
    }
    return res;
}

void Solve(){
    int n, t; cin >> n >> t;
    string s; cin >> s;
    FORi(t)
        s = update(s, n);
    cout << s << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
