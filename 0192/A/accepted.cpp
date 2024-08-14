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
    int n; cin >> n;
    for (int i = 1; i * i < n; i++) {
        for (int j = i; 1; j++) {
            int tmp = i * (i + 1) / 2 + j * (j + 1) / 2;
            if (tmp > n)
                break;
            if (tmp == n) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
