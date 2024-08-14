#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    string s; cin >> s;
    unsigned long long res = 1;
    unsigned long long dix = 0;
    set<char> let;
    if (s[0] == '?')
        res *= 9;
    else if (s[0] <= 'J' && s[0] >= 'A') {
        let.insert(s[0]);
        res *= 9;
    }
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == '?')
            dix++;
        else if (s[i] <= 'J' && s[i] >= 'A') {
            if (let.find(s[i]) == let.end()) {
                res *= (10 - let.size());
                let.insert(s[i]);
            }
        }
    }
    cout << res;
    while (dix--)
        cout << 0;
    cout << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
