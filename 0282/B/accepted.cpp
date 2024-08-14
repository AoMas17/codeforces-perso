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
    vector<pair<int, int>> v(n);
    string res = "";
    FORi(n) {
        int a, g; cin >> a >> g;
        v[i] = make_pair(a, g);
    }
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) { return abs(a.first - a.second) < abs(b.first - b.second); });
    
    int suma = 0;
    int sumg = 0;
    FORi(n) {
        int a = v[n - i - 1].first;
        int g = v[n - i - 1].second;
        if (abs(suma + a - sumg) < abs(suma - sumg - g)){
            suma += a; 
            res += "A";
        }
            
        else {
            sumg += g;
            res += "G";
        }
    }

    if (abs(suma - sumg > 500))
        cout << -1 << endl;
    else
        cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
