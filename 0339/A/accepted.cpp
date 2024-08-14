#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    string s; cin >> s;
    int nbs[3] = { 0, 0, 0 };
    int count = 0;
    for (int i = 0; i < s.size(); i += 2) {
        nbs[s[i] - '1']++;
        count++;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < nbs[i]; j++) {
            count--;
            cout << i + 1;
            if (count > 0)
                cout << '+';
        }
    }
    cout << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
