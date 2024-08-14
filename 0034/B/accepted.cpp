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
    int n, m; cin >> n >> m;
    vector<int> v(n);
    FORi(n)
        cin >> v[i];
    sort(v.begin(), v.end());
    ull res = 0;
    int ind = 0;
    while (ind < m && v[ind] < 0) 
        res -= v[ind++];
    cout << res << endl;

}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
