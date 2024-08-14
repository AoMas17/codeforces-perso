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

void Solve() {
    string trump; cin >> trump; //"6", "7", "8", "9", "T", "J", "Q", "K" and "A"
    map<char, int> m;
    m['6'] = 1;
    m['7'] = 2;
    m['8'] = 3;
    m['9'] = 4;
    m['T'] = 5;
    m['J'] = 6;
    m['Q'] = 7;
    m['K'] = 8;
    m['A'] = 9;
    string c1; cin >> c1;
    string c2; cin >> c2;
    if (c1[1] != c2[1] && c2[1] != trump[0] && c1[1] != trump[0]) {
        cout << "NO" << endl;
        return;
    }
    if (m[c1[0]] > m[c2[0]]) {
        if (c2[1] == trump[0] && c1[1] != trump[0])
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else {
        if (c2[1] != trump[0] && c1[1] == trump[0])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
