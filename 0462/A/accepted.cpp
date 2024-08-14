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
    vector<string> v(n);
    FORi(n)
        cin >> v[i];
    FORi(n) {
        FORj(n) {
            int neigh = 0;
            if (i - 1 >= 0 && v[i - 1][j] == 'o')
                neigh++;
            if (i + 1 < n && v[i + 1][j] == 'o')
                neigh++;
            if (j + 1 < n && v[i][j + 1] == 'o')
                neigh++;
            if (j - 1 >= 0 && v[i][j - 1] == 'o')
                neigh++;
            if (neigh % 2 != 0) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    
    cout << "YES" << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
