#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    bool isgood = true;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1])
            isgood = false;
    }
    if (isgood) {
        cout << "YES" << endl;
        return;
    }
    if (m % 2 == 0) {
        cout << "NO" << endl;
        return;
    }
    for (int i = 1; i < m; i++) {
        if (t[i] == t[i - 1]) {
            cout << "NO" << endl;
            return;
        }
    }
    char test = t[0];
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1] && s[i] == test) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
