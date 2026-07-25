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
    ll n, c; cin >> n >> c;
    vector<ll> a(n); FORi(n) cin >> a[i];
    vector<ll> b(n); FORi(n) cin >> b[i];
    bool sorting = false;
    FORi(n){
        if(b[i] > a[i]){
            sorting = true;
            break;
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll cost = 0;
    FORi(n){
        if(b[i] > a[i]){
            cost = -1;
            break;
        }
        else cost += a[i] - b[i];
    }
    if (cost == -1)
        cout << -1 << endl;
    else
        cout << cost + (sorting ? c : 0) << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
