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
    
    vector<int> v(n);
    FORi(n)
    {
        ll a; cin >> a;
        v[a - 1] = 1;  
    }

    FORi(n)
    {
        if (v[i] == 0)
        {
            cout << i + 1 << endl;
            return;
        }
    }
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
