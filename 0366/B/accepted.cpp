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
    ll n, k; cin >> n >> k;
    vector<ll> v(n);
    FORi(n)
        cin >> v[i];
    ll mini = LONG_LONG_MAX;
    ll miniInd = 0;
    for (int i = 0; i < k; i++) {
        ll curSum = 0;
        for (int j = i; j < n; j += k)
            curSum += v[j];
        if (curSum < mini) {
            mini = curSum;
            miniInd = i;
        }
    }
    cout << miniInd + 1 << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
