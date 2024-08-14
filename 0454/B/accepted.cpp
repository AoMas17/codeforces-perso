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
    int ind = 1;
    int fmin = v[0];
    while (ind < n && v[ind - 1] <= v[ind]) 
        fmin = min(fmin, v[ind++]);
    if (ind == n) {
        cout << 0 << endl;
        return;
    }
    int emax = v[ind];
    int asc = ind++;
    while (ind < n && v[ind - 1] <= v[ind]) 
        emax = max(emax, v[ind++]);
    if (ind < n || fmin < emax)
        cout << -1 << endl;
    else
        cout << ind - asc << endl;
    //cout << fmin << " " << emax << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
