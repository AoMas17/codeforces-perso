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
    vector<string>v(n);
    FORi(n) cin >> v[i];
    char cur = v[0][0];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i][0] != cur)
        {
            cur = v[i][0];
            res++;
        }
    }
    cout << res << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
