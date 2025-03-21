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
    ll q; cin >> q;
    while (q--)
    {
        ll k; cin >> k;
        ll i = 0;
        ll pow = 1;
        while (true)
        {
            ll tmp = k - 9 * pow * (i + 1);
            pow *= 10;
            i++;
            if (tmp <= 0)
                break;
            k = tmp;
        }
        
        ll tmp = (k - 1) / i;
        string s = to_string(pow / 10 + tmp);
        cout << s[(k - 1) % i] << endl;
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
