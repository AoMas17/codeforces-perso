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
    int mind = abs(v[0] - v[n - 1]);
    int ind = n - 1;
    FORi(n - 1) {
        int tmp = abs(v[i] - v[i + 1]);
        if (tmp < mind) {
            mind = tmp;
            ind = i;
        }
    }
    if (ind == n - 1)
        cout << n << " " << 1 << endl;
    else
        cout << ind + 1 << " " << ind + 2 << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
