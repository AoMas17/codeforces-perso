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
    int n, k; cin >> n >> k;
    vector<int> v(n);
    FORi(n)
        v[i] = i + 1;
    if (k == n) {
        cout << -1 << endl;
        return;
    }

    int ind = 1;
    int goods = n - 1;
    while (goods != k) {
        int tmp = v[ind];
        v[ind] = v[ind - 1];
        v[ind - 1] = tmp;
        ind++;
        goods--;
    }
    for (int el : v)
        cout << el << " ";
    cout << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
