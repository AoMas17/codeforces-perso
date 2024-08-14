#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    string s; cin >> s;
    string hello = "hello";
    int cur = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == hello[cur])
            cur++;
        if (cur == 5) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
