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
    int n, d; cin >> n >> d;
    int s = 0;
    FORi(n) {
        int a; cin >> a;
        s += a;
    }
    if (s + (n - 1) * 10 > d)
        cout << -1 << endl;
    else
        cout << (d - s) / 5 << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
