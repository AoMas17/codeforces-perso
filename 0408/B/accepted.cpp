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
    string todo; cin >> todo;
    int res = 0;
    for (auto el : todo) {
        if (m[el] > 0) {
            m[el]--;
            res++;
            if (m[el] == 0)
                m[el] = -1;
        }
        else if (m[el] == 0) {
            cout << -1 << endl;
            return;
        }
    }
    if (res )
    cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
