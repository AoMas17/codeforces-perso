#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    int keep = 0;
    int res = 0;
    sort(v.begin(), v.end());
    while (keep <= sum) {
        sum -= v[n - res - 1];
        keep += v[n - res - 1];
        res++;
    }
    cout << res << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
