#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FORi(a) for (int i = 0; i < a; i++)
#define FORj(a) for (int j = 0; j < a; j++)
#define FORk(a) for (int k = 0; k < a; k++)
#define ull unsigned long long
#define ll long long

void Solve(){
    int n, m; 
    cin >> n >> m;
    vector<int> v(m);
    FORi(m) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int res = INT_MAX;
    for (int i = 0; i < m - n + 1; i++) {
        int tmp = v[i + n - 1] - v[i];
        res = min(res, tmp);
    }
    cout << res << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
