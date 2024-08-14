#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    s += s;
    int cur = 0;
    int curend = 0;
    int opp = 0;
    vector<int> pos;
    if (n % 2 == 1) {
        cout << -1 << endl;
        return;
    }
    while (cur < n - curend - 1) {
        //cout << s[cur] << "  " << s[n - curend - 1] << endl;
        if (opp > 300) {
            cout << -1 << endl;
            return;
        }
        else if (s[cur] == s[n - curend - 1] && s[cur] == '1') {
            string tmp = "";
            for (int i = 0; i < cur; i++)
                tmp += s[i];
            tmp += "01";
            for (int i = cur; i < n; i++)
                tmp += s[i];
            s = tmp;
            n += 2;
            opp++;
            curend++;
            pos.push_back(cur);
            cur++;
        }
        else if (s[cur] == s[n - curend - 1] && s[cur] == '0') {
            string tmp = "";
            for (int i = 0; i < n - curend; i++)
                tmp += s[i];
            tmp += "01";
            for (int i = n - curend; i < n; i++)
                tmp += s[i];
            s = tmp;
            pos.push_back(n - curend);
            cur++;
            curend++;
            n += 2;
            opp++;
        }
        else {
            cur++;
            curend++;
        }
        //cout << s << endl;
    }
    cout << opp << endl;
    for (auto el : pos) {
        cout << el << " ";
    }
    cout << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
