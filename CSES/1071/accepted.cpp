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
    ll y, x; cin >> y >> x;
    ll res = -1;

    if (y <= x)
    {
        if (x % 2)
        {
            res = x * x - y + 1;
        }

        else
        {
            res = (x - 1) * (x - 1) + y;
        }
    }

    else
    {
        if (y % 2 == 0)
        {
            res = y * y - x + 1;
        }

        else
        {
            res = (y - 1) * (y - 1) + x;
        }
    }

    cout << res << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
