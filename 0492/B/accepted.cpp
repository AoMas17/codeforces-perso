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
    int n, l; cin >> n >> l;
    vector<long double> v(n);
    FORi(n)
        cin >> v[i];
    sort(v.begin(), v.end());
    long double maxi = max(v[0] * 2, (l - v[n - 1]) * 2);
    FORi(n - 1) {
        long double tmp = v[i + 1] - v[i];
        if (tmp > maxi)
            maxi = tmp;
    }
    printf("%Lf\n", maxi / 2);
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
