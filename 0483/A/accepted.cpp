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

bool coprime(ll a, ll b) {
    for (ll i = 2; i <= a; i++) {
        if (a % i == 0 && b % i == 0)
            return false;
    }
    return true;
}

void Solve(){
    ll l, r; cin >> l >> r;
    if (r - l < 2)
        cout << -1 << endl;
    else
        if (l % 2 == 0) {
            cout << l << " " << l + 1 << " " << l + 2 << endl;
        }
        else {
            if (r - l < 3)
                cout << -1 << endl;
            else
                cout << l + 1 << " " << l + 2 << " " << l + 3 << endl;
        }
            

    
}
	
int main(){ 
    Solve();
    return 0;
}
