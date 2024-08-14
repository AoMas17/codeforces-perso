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
    int n, m; cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    FORi(n)
        cin >> a[i];
    FORi(m)
        cin >> b[i];
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            i++;
            j++;
        }
        else {
            j++;
        }
    }
    int res = n - i;
    cout << res << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
