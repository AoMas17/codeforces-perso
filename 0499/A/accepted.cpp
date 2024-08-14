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
    int n, x; cin >> n >> x;
    int cur = 1;
    int total = 0;
    FORi(n) {
        int l, r; cin >> l >> r;
        while (cur + x <= l)
            cur += x;
        total += r - cur + 1;
        cur = r + 1;
    }
    cout << total << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
