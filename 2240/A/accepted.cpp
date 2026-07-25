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

ll pw(ll a){return 1LL<<a;}

void Solve(){
    ll n, k; cin >> n >> k;
    ll res = 0;
    FORi(30)
	{
		ll num = min(n / pw(i) , k);
		res += num;
        n -= num * pw(i);
	}
    cout << res << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
