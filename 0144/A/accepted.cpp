#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FOR(a) for (int i = 0; i < a; i++)

void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    FOR(n) {
        cin >> v[i];
    }
    int res = 0;
    int m = v[0];
    int ind = 0;
    FOR(n) {
        if (v[i] <= m) {
            m = v[i];
            ind = i;
        }
    }
    res += abs(ind - (n - 1));
    m = v[0];
    int ind2 = 0;
    FOR(n) {
        if (v[i] > m) {
            m = v[i];
            ind2 = i;
        }
    }
    if (ind < ind2)
        res--;
    res += ind2;
    cout << res << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
