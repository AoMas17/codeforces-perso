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
    int n, k; cin >> n >> k;
    vector<pair<int, int>> v(n);
    FORi(n) {
        int a; cin >> a;
        v[i] = make_pair(a, i + 1);
    }
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {return a.first < b.first; });
    
    cout << v[n - k].first << endl;
    for (int i = n - k; i < n; i++) 
        cout << v[i].second << " ";
    cout << endl;
}
	
int main(){ 
    init; 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    Solve();
    return 0;
}
