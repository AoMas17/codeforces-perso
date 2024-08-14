#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    vector<vector<int>> m;
    int x = 0;
    int y = 0;
    for (int i = 0; i < 5; i++) {
        vector<int> v(5);
        for (int j = 0; j < 5; j++) {
            cin >> v[i];
            if (v[i] == 1) {
                x = i;
                y = j;
            }
        }
        m.push_back(v);
    }
    cout << abs(2-x) + abs(2-y) << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
