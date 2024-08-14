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
    int a, b, c, d, e, f, g, h, j; cin >> a >> b >> c >> d >> e >> f >> g >> h >> j;
    a = g + h;
    j = d + g;
    int l1 = a + b + c;
    int l2 = d + e + f;
    int l3 = g + h + j;
    int c1 = a + d + g;
    int c2 = b + e + h;
    int c3 = c + f + j;
    int d1 = a + e + j;
    int d2 = c + e + g;
    while (!(l1 == l2 && l2 == l3 && l3 == c1 && c1 == c2 && c2 == c3 && c3 == d1 && d1 == d2)) {
        a--; e++; j--;
        l1 = a + b + c;
        l2 = d + e + f;
        l3 = g + h + j;
        c1 = a + d + g;
        c2 = b + e + h;
        c3 = c + f + j;
        d1 = a + e + j;
        d2 = c + e + g;
    }
    cout << a << " " << b << " " << c << endl;
    cout << d << " " << e << " " << f << endl;
    cout << g << " " << h << " " << j << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
