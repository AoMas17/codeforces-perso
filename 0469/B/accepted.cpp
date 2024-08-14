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

bool intersect(int a, int b, int c, int d) {
    return (a <= c && c <= b) || (a <= d && d <= b) || (a >= c && b <= d);
}

void Solve(){
    int p, q, l, r; cin >> p >> q >> l >> r;
    vector<int> a(p);
    vector<int> b(p);
    vector<int> c(q);
    vector<int> d(q);
    FORi(p) {
        cin >> a[i];
        cin >> b[i];
    }
    FORi(q) {
        cin >> c[i];
        cin >> d[i];
    }
    int res = 0;
    for (int i = l; i <= r; i++) {
        bool cond = false;
        for (int j = 0; j < q; j++) {
            int curL = c[j] + i;
            int curR = d[j] + i;
            for (int k = 0; k < p; k++) {
                cond = intersect(curL, curR, a[k], b[k]);
                if (cond)
                    break;
            }
            if (cond)
                break;
        }
        if (cond)
            res++;
    }
    cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
