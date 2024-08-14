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
    int x; cin >> x;
    if (x >= 0)
        cout << x << endl;
    else if (x > -10)
        cout << 0 << endl;
    else {
        if (x % 10 < (x / 10) % 10)
            cout << x / 10 << endl;
        else
            cout << (x / 100) * 10 + x % 10 << endl;
    }
}
	
int main(){ 
    Solve();
    return 0;
}
