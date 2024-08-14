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
    vector<int> v(n);
    FORi(n)
        cin >> v[i];
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            int l1, l2, r1, r2;
            l1 = min(v[j - 1], v[j]);
            r1 = max(v[j - 1], v[j]);
            l2 = min(v[i - 1], v[i]);
            r2 = max(v[i - 1], v[i]);
            if ((l1 < l2 && r1 > l2 && r1 < r2) || (l1 > l2 && l1 < r2 && r1 > r2)) {
                cout << "yes" << endl;
                return;
            }
        }
    }
    cout << "no" << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
