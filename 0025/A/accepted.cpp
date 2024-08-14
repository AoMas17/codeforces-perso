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
    vector<int> v(n);
    FORi(n)
        cin >> v[i];
    int good = (v[0] % 2 + v[1] % 2 + v[2] % 2) / 2;
    FORi(n) {
        if (v[i] % 2 != good) {
            cout << i + 1 << endl;
            return;
        }
    }
}
	
int main(){ 
    Solve();
    return 0;
}
