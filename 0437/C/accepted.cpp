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
    vector<pair<int,int>> v(n);
    vector<int> costs(n);
    FORi(n)
    {
        int a; cin >> a;
        v[i] = {a, i};
        costs[i] = a;
    }
    sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b){
        return a.first > b.first;
    });

    map<int, vector<int>> mp;
    FORi(m){
        int a, b; cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }

    int res = 0;
    FORi(n)
    {
        int torm = v[i].second;
        for (int x : mp[torm + 1])
        {
            res += costs[x - 1];
        }
        costs[torm] = 0;
    }
    cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
