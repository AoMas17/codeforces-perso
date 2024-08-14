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

auto sortRuleLambda = [](pair<int,int> p1, pair<int,int> p2) -> bool
{
    return p1.first < p2.first;
};

void Solve(){
    int s, n; cin >> s >> n;
    vector<pair<int, int>> v(n);
    FORi(n) {
        int sn, bn; cin >> sn >> bn;
        v[i] = (pair<int,int>) { sn, bn };
    }
    sort(v.begin(), v.end(), [](pair<int, int> p1, pair<int, int> p2) {return p1.first < p2.first;});
    
    FORi(n) {
        if (v[i].first >= s) {
            cout << "NO" << endl;
            return;
        }
        s += v[i].second;
    }
    cout << "YES" << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
