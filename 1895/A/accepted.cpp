#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int x, y, k;
    cin >> x >> y >> k;
    if (y < x) {
        cout << x << endl;
        return;
    }
    else if (x + k >= y) {
        cout << y << endl;
        return;
    }
    else {
        cout << y + abs(x + k - y) << endl;
        return;
    }
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
