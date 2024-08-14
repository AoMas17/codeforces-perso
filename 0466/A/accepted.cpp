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
    ull n, m, a, b; cin >> n >> m >> a >> b;
    int tmp = n / m;
    if (n % m)
        tmp++;
    ull res = min(n * a, tmp * b);
    res = min(res, (tmp - 1) * b + (n - (tmp - 1) * m) * a);
    cout << res << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
