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

bool isin(string s, string t) {
    int inds = 0;
    int indt = 0;
    while (inds < s.size() && indt < s.size()) {
        if (s[inds] == t[indt]) {
            inds++;
            indt++;
        }
        else
            inds++;
    }
    return indt == t.size();
}

void Solve(){
    string s; string t; cin >> s >> t;
    map<char, int> m1;
    map<char, int> m2;
    for (char el : s)
        m1[el]++;
    for (char el : t)
        m2[el]++;
    bool possible = true;
    for (auto el : m2) {
        if (m1[el.first] < el.second) {
            possible = false;
        }
    }
    if (!possible) {
        cout << "need tree" << endl;
        return;
    }
    else {
        if (s.size() != t.size()) {
            if (isin(s, t)) {
                cout << "automaton" << endl;
            }
            else
                cout << "both" << endl;
        }
        else
            cout << "array" << endl;
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
