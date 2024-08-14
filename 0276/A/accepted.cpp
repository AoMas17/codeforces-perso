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
    int n, k; cin >> n >> k;
    int m = INT_MIN;
    FORi(n) {
        int f, t;
        cin >> f >> t;
        int tocmp;
        if (t <= k)
            tocmp = f;
        else
            tocmp = f - (t - k);
        m = max(m, tocmp);
    }
    cout << m << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
