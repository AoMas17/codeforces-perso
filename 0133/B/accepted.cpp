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
    map<char, string> m;
    m['>'] = "1000";
    m['<'] = "1001";
    m['+'] = "1010";
    m['-'] = "1011";
    m['.'] = "1100";
    m[','] = "1101";
    m['['] = "1110";
    m[']'] = "1111";
    string conv = "";
    for (char el : s)
        conv += m[el];
    ull mod = 1000003;
    ull res = 0;
    for (char el : conv) {
        res *= 2;
        if (el == '1')
            res++;
        res %= mod;
    }
    cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
