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
    ll a, b; cin >> a >> b;
    if ((a + b) % 3 == 0)
    {
        if (min(a, b) * 2 >= max(a, b))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
