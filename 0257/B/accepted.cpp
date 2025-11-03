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
    ll n, m; cin >> n >> m;
    if (n == 1 || m == 1)
    {
        cout << max(n, m) - 1 << ' ' << 1 << endl;
    }

    else
    {
        ll mini = min(n, m);
        ll maxi = max(n, m);
        bool imp = false;
        if (mini % 2)
        {
            mini--;
            imp = true;
        }

        ll score1 = mini - 1;
        ll score2 = mini;
        
        if (imp)
        {
            score1 += maxi - mini;
            score2++;
        }

        else
        {
            score1 += maxi - mini;
        }

        cout << score1 << ' ' << score2 << endl;
    }
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
