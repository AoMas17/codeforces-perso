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

void Solve(){
    int n; cin >> n;
    vector<vector<int>> v(3);
    FORi(n) {
        int a; cin >> a;
        v[a - 1].push_back(i + 1);
    }
    int l = min(min(v[0].size(), v[1].size()), v[2].size());
    cout << l << endl;
    FORi(l) {
        FORj(3)
            cout << v[j][i] << ' ';
        cout << endl;
    }
}
	
int main(){ 
    Solve();
    return 0;
}
