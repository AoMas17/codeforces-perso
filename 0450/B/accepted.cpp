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
#define MOD 1000000007 

int mod(int x, int m) {
    int r = x % m;
    return r < 0 ? r + m : r;
}

void Solve(){
    ll x, y; cin >> x >> y;
    ll n; cin >> n;
    n--;
    ll a = mod(x, MOD);
    ll b = mod(y, MOD);
    n = n % 6;
    switch (n) {
    case 0:
        cout << a << endl;
        break;
    case 1:
        cout << b << endl;
        break;
    case 2: 
        cout << mod(b - a, MOD) << endl;
        break;
    case 3: 
        cout << mod(-a, MOD) << endl;
        break;
    case 4: 
        cout << mod(-b, MOD) << endl;
        break;
    default: 
        cout << mod(a - b, MOD) << endl;
        break;
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
