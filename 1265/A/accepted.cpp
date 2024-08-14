#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

vector<char> suppr(vector<char> v, char c1) {
    for (int i = 0; i < v.size(); i++)
        if (v[i] == c1)
            v.erase(v.begin() + i);
    return v;
}

void Solve(){
    string s; cin >> s;
    int n = s.size();
    string res = "";
    for (int i = 0; i < n - 1; i++) {
        char toadd = s[i];
        if (s[i] == s[i + 1] && s[i] != '?') {
            cout << -1 << endl;
            return;
        }
        else if (s[i] == '?') {
            vector<char> v = { 'a', 'b', 'c' };
            char first = i < 1 ? ' ' : res[i - 1];
            v = suppr(v, first);
            v = suppr(v, s[i + 1]);
            toadd = v[0];
        }
        res += toadd;
    }
    if (s[n - 1] == '?') {
        vector<char> v = { 'a', 'b', 'c' };
        v = suppr(v, res[n - 2]);
        res += v[0];
    }
    else
        res += s[n - 1];
    cout << res << endl;

}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
