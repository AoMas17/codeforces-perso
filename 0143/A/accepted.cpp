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
    int r1, r2, c1, c2, d1, d2; cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            for (int k = 1; k < 10; k++) {
                for (int l = 1; l < 10; l++) {
                    if (i == j || i == k || i == l || j == k || j == l || k == l) {
                        continue;
                    }
                    if (i + j == r1 && k + l == r2 && i + k == c1 && j + l == c2 && i + l == d1 && j + k == d2) {
                        cout << i << " " << j << endl << k << " " << l << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << -1 << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
