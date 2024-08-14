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
    int i = 1;
    int fmax = 0;
    while (i < n && v[i - 1] < v[i]) {
        fmax = max(fmax, v[i - 1]);
        i++;
    }
    int mmin = v[i - 1];
    int mmax = v[i - 1];
    int start = i;
    while (i < n && v[i - 1] > v[i]) {
        mmin = min(mmin, v[i]);
        mmax = max(mmax, v[i]);
        i++;
    }
    int end = i;
    bool cond = true;
    int emin = INT_MAX;
    while (i < n) {
        emin = min(emin, v[i]);
        if (v[i - 1] > v[i])
            cond = false;
        i++;
    }
    if (fmax > mmin || emin < mmax)
        cond = false;
    if (start > end)
        end = start;
    if (cond) {
        cout << "yes" << endl;
        cout << start << " " << end << endl;
    }
    else
        cout << "no" << endl;
    //cout << fmax << " " << mmin << " " << mmax << " " << emin << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
