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
    int t; cin >> t;
    ll r1 = 0;
    ll r2 = 0;
    vector<int> u(n + 1);
    FORi(n)
        u[v[i]] = i + 1;
    while (t--)
    {
        int el; cin >> el;
        r1 += u[el];
        r2 += n - u[el] + 1;
    }
    cout << r1 << ' ' << r2 << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
