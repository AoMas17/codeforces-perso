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
    vector<int> a(n);
    vector<int> b(m);
    FORi(n) cin >> a[i];
    FORi(m) cin >> b[i];
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ai = n - 1;
    int bi = m - 1;
    int res = 0;

    while (ai >= 0 && bi >= 0)
    {
        if (abs(a[ai] - b[bi]) <= k)
        {
            res++;
            ai--; bi--;
        }
        else
        {
            if (a[ai] > b[bi])
                ai--;
            else
                bi--;
        }
    }
    cout << res << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
