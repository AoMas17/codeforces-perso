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
    ull n, k; cin >> n >> k;
    if (k <= n / 2 + n % 2)
        cout << k * 2 - 1 << endl;
    else
        cout << (k - (n / 2 + n % 2)) * 2 << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
