#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

bool issortedbetween(vector<int> v, int l, int r) {
    for (int i = l + 1; i < r; i++) {
        if (v[i - 1] > v[i])
            return false;
    }
    return true;
}

void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    int test = 2;
    while (test * 2 < n) {
        if (!issortedbetween(v, test, 2 * test)) {
            cout << "NO" << endl;
            return;
        }
        test *= 2;
    }
    if (!issortedbetween(v, test, n)) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
