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
    vector<string> v(n);
    FORi(n)
        cin >> v[i];
    FORi(n) {
        FORj(m) {
            if (v[i][j] == '.')
                v[i][j] = (j + i) % 2 ? 'B' : 'W';
        }
    }
    FORi(n) {
        cout << v[i] << endl;
    }
}
	
int main(){ 
    Solve();
    return 0;
}
