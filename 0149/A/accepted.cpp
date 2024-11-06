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
    int k; cin >> k;
    vector<int> v(12);
    FORi(12) cin >> v[i];
    sort(v.begin(), v.end());
    int sum = 0; 
    FORi(12)
    {
        if (sum >= k)
        {
            cout << i << endl;
            return;
        }
        sum += v[11 - i];
    }
    if (sum >= k)
        {
            cout << 12 << endl;
            return;
        }
    cout << -1 << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
