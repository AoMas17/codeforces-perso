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
    ll n; cin >> n;
    ll res = 0;
    for(ll i = 1; i <= 11; i++)
    {
        if (10 + i == n)
        {
            if (i == 10)
                res += 15;
            else
                res += 4;
        }
    }
    cout << res << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
