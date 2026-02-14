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

bool bis(ll m, ll x)
{
    //cout << "x : " << x << endl;
    if (x < m)
        return false;

    if (x == m)
        return true;

    if (x % 3 == 0)
    {
        ll tmp1 = x / 3;
        ll tmp2 = x / 3 * 2;
        return (bis(m, tmp1) || bis(m, tmp2));  
    }
    return false;
}

void Solve(){
    ll n, m; cin >> n >> m;
    ll x = n;
    if (bis(m, x))
    {
        cout << "YES" << endl;
    }
    else 
        cout << "NO" << endl;
    return;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
