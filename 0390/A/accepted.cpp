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
    vector<int> l(101);
    vector<int> c(101);
    FORi(n) {
        int a, b; cin >> a >> b;
        c[a] = 1;
        l[b] = 1;
    }
    int r1 = 0;
    int r2 = 0;
    FORi(101) {
        if (c[i])
            r1++;
        if (l[i])
            r2++;
    }
    int res = min(r1, r2);
    cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
