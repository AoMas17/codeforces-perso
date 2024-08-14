#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FORi(a) for (int i = 0; i < a; i++)
#define FORj(a) for (int j = 0; j < a; j++)
#define FORk(a) for (int k = 0; k < a; k++)
#define ull unsigned long long
#define ll long long

int difficulty(vector<int> v) {
    int res = v[1] - v[0];
    FORi(v.size() - 1)
        res = max(v[i + 1] - v[i], res);
    return res;
}

void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    FORi(n)
        cin >> v[i];
    int res = INT_MAX;
    for (int i = 1; i + 1 < n; i++) {
        int tmp = v[i];
        v[i] = v[i - 1];
        res = min(res, difficulty(v));
        v[i] = tmp;
    }
    cout << res << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
