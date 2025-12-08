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
    ll n, m, a;
    cin >> n >> m >> a;

    ll res1 = n / a;
    if (n % a)
        res1++;
    
    ll res2 = m / a;
    if (m % a)
        res2++;
    
    cout << res1 * res2 << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
