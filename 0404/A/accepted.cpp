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
    vector<string> v(n);
    FORi(n)
        cin >> v[i];
    char dl = v[0][0];
    FORi(n) {
        if (v[i][i] != dl || v[i][n - i - 1] != dl) {
            cout << "NO" << endl;
            return;
        }
    }
    char ol = v[0][1];
    if (ol == dl)
        cout << "NO" << endl;
    else {
        FORi(n) {
            FORj(n) {
                if (i != j && i != n - j - 1 && v[i][j] != ol) {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        cout << "YES" << endl;
    }
}
	
int main(){ 
    Solve();
    return 0;
}
