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
    
    if (n == 1)
        cout << 1 << endl;
    else if (n < 4)
        cout << "NO SOLUTION" << endl;
    else
    {
        for (int i = 2; i <= n; i += 2)
            cout << i << ' ';
        for (int i = 1; i <= n; i += 2)
            cout << i << ' ';
        cout << endl;
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
