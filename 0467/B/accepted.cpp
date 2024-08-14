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

int nb1(int x) {
    int res = 0;
    while (x != 0) {
        if (x % 2)
            res++;
        x /= 2;
    }
    return res;
}

void Solve(){
    int n, m, k; cin >> n >> m >> k;
    vector<int> v(m);
    FORi(m)
        cin >> v[i];
    int Fedor; cin >> Fedor;
    int res = 0;
    FORi(m) {
        if (nb1(v[i] ^ Fedor) <= k)
            res++;
    }
    cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
