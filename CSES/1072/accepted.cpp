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
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            cout << 0 << endl;
        if (i == 2)
            cout << 6 << endl;
        if (i == 3)
            cout << 28 << endl;
        if (i == 4)
            cout << 96 << endl;

        if (i >= 5)
        {
            ll c = i * i;
            ll tot = c * (c - 1) / 2;

            ll att = 4 * (i - 1) * (i - 2);
        
            cout << tot - att << endl;
        }
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
