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
    int m; cin >> m;
    vector<int> v(m);
    int tot = 0;
    FORi(m) {
        cin >> v[i];
        tot += v[i];
    }
    int x, y; cin >> x >> y;
    int nb = 0;
    int inb = 0;
    while (nb <= y && inb < m) {
        nb += v[inb++];
        if (x <= nb && nb <= y && x <= tot - nb && tot - nb <= y) {
            cout << inb + 1 << endl;
            //cout << nb << endl; 
            return;
        }
    }
    cout << 0 << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
