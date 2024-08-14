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
    int n; cin >> n;
    int lim = n * 2;
    map<int, int> m;
    FORi(4) {
        string s; cin >> s;
        FORj(4) {
            if (s[j] != '.')
                m[s[j] - '0']++;
        }
    }
    for (auto el : m) {
        if (el.second > lim) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
