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
    int y, k, n; cin >> y >> k >> n;
    int x = k - (y % k);
    if (y + x > n)
        cout << -1 << endl;
    else {
        while (y + x <= n) {
            cout << x << " ";
            x += k;
        }
        cout << endl;
    }
}
	
int main(){ 
    Solve();
    return 0;
}
