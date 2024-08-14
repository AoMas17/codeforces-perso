#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> pos(n);
    for (int i = 0; i < n; i++)
        pos[v[i] - 1] = i;
    string res = "";
    int posmin = pos[0];
    int posmax = pos[0];
    for (int i = 0; i < n; i++) {
        posmax = max(posmax, pos[i]);
        posmin = min(posmin, pos[i]);
        if (posmax - posmin == i)
            res += '1';
        else
            res += '0';
    }
    cout << res << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
