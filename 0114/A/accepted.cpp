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
    ull k, l; cin >> k >> l;
    int res = -1;
    int ind = 0;
    ull mult = k;
    while (k <= l) {
        if (k == l) {
            res = ind;
            break;
        }
        ind++;
        k *= mult;
    }
    if (res == -1) 
        cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        cout << res << endl;
    }
}
	
int main(){ 
    Solve();
    return 0;
}
