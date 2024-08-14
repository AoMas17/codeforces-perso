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
    vector<pair<int,int>> v(n);
    FORi(n) {
        int a, b; cin >> a >> b;
        v[i] = make_pair(a, b);
    }
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) 
        {
            if (a.second == b.second)
                return a.first < b.first;
            else
                return a.second < b.second;
        });

    int res = 0;
    int r = 1;
    int i = n - 1;
    while (r && i >= 0) {
        res += v[i].first;
        r += v[i].second - 1;
        i--;
    }
    cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
