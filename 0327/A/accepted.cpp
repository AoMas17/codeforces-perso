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
    int nb1 = 0;
    FORi(n) 
    { 
        cin >> v[i];
        nb1 += v[i];
    }
    if (nb1 == n)
    {
        cout << n - 1 << endl;
        return;
    }

    int m = 0;
    int cur = 0;
    FORi(n)
    {
        if (v[i] == 0)
            cur++;
        else
            cur--;
        if (cur < 0)
            cur = 0;
        m = max(m, cur);    
    }
    cout << m + nb1 << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
