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
    string s; cin >> s;
    map<char, int> m;
    for (char el : s)
        m[el]++;
    int tmp = 0;
    if (m['n'] >= 3) {
        tmp++;
        m['n'] -= 3;
        tmp += m['n'] / 2;
    }
    int res = min(m['t'], tmp);
    res = min(res, m['i']);
    res = min(res, m['e'] / 3);
    cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
