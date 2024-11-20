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
    FORi(n) cin >> v[i];
    int cond = true;
    for (int i = k; i < n; i++)
    {
        if (v[i - 1] != v[i])
        {
            cond = false;
            break;
        }
    }
    if (cond)
    {
        int i = k - 1;
        while (i > 0 && v[i - 1] == v[i])
        {
            i--;
        }
        //cout << "i : " << i << endl;
        if (i == 0)
        {
            cout << 0 << endl;
        }
        else
            cout << i << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
