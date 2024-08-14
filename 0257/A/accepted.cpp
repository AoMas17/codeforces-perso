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
    int n, m, k; cin >> n >> m >> k;
    vector<int> v(n);
    FORi(n)
        cin >> v[i];
    if (k >= m) {
        cout << 0 << endl;
        return;
    }
    sort(v.begin(), v.end());
    int ind = n - 1;
    while (ind >= 0 && v[ind] > 1) {
        k += v[ind] - 1;
        if (k >= m) {
            cout << n - ind << endl;
            return;
        }
        ind--;
    }
    cout << -1 << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
