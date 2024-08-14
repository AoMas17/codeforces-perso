#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    string s1; cin >> s1;
    string s2; cin >> s2;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] += 'a' - 'A';
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] += 'a' - 'A';
        if (s1[i] > s2[i]) {
            cout << 1 << endl;
            return;
        }
        if (s1[i] < s2[i]) {
            cout << -1 << endl;
            return;
        }
    }
    cout << 0 << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
