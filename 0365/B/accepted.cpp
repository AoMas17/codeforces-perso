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
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    vector<int> v(n + 2);
    v[0] = 0;
    v[1] = 0;
    FORi(n)
        cin >> v[i + 2];
    n += 2;
    int m = 2;
    for (int l = 3; l < n; l++) {
        int r = l + 1;
        while (r < n && v[r] == v[r - 1] + v[r - 2])
            r++;
        //cout << "l : " << l << " r : " << r << endl;
        m = max(m, r - l + 1);
        l = r - 1;
    }
    cout << m << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
