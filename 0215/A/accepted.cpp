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
    vector<int> a(n);
    FORi(n) cin >> a[i];
    int m; cin >> m;
    vector<int> b(m);
    FORi(m) cin >> b[i];
    int maxval = 0;
    int count = 0;
    FORi(n)
    {
        FORj(m)
        {
            if (b[j] % a[i] == 0)
            {
                int val = b[j] / a[i];
                if (val > maxval)
                {
                    maxval = val;
                    count = 1;
                }
                else if (val == maxval)
                    count++;
            }
        }
    }
    cout << count << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
