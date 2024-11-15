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
    vector<vector<int>> v(5);
    FORi(5)
    {
        vector<int> a(5);
        FORj(5) cin >> a[j];
        v[i] = a;
    }
    int res = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                for (int l = 0; l < 5; l++)
                {
                    for (int m = 0; m < 5; m++)
                    {
                        set<int> s;
                        s.insert(i);
                        s.insert(j);
                        s.insert(k);
                        s.insert(l);
                        s.insert(m);
                        if (s.size() != 5)
                            continue;
                        res = max(res, v[i][j] + v[j][i] + v[k][l] + v[l][k] +
                        v[j][k] + v[k][j] + v[l][m] + v[m][l] +
                        v[k][l] + v[l][k] +
                        v[l][m] + v[m][l]);
                    }
                }
            }
        }
    }
    cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
