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
    int a, b, c; cin >> a >> b >> c;
    int m = max(max(a,b),max(b,c));
    if (a % 2 != (b + c) % 2 || m - (a + b + c - m) > 0){
        cout << "Impossible" << endl;
        return;
    }
    int minus = (b + c - a) / 2;
    int resa = b - minus;
    int resb = c - minus;
    int resc = minus;
    cout << resa << " " << resc << " " << resb << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
