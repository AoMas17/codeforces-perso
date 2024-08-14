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

ull rmz(ull a) {
    ull res = 0;
    while (a) {
        ull tmp = a % 10;
        if (tmp)
            res = res * 10 + tmp;
        a /= 10;
    }
    ull res2 = 0;
    while (res) {
        res2 = res2 * 10 + res % 10;
        res /= 10;
    }
    return res2;
}

void Solve(){
    ull a, b; cin >> a >> b;
    ull c = a + b;
    if (rmz(a) + rmz(b) == rmz(c))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
