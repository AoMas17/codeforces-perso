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
    vector<vector<bool>> res = { {1, 1, 1}, {1, 1, 1}, {1, 1, 1} };
    FORi(3) {
        FORj(3) {
            int nb; cin >> nb;
            if (nb % 2) {
                res[i][j] = !res[i][j];
                if (i - 1 >= 0)
                    res[i - 1][j] = !res[i - 1][j];
                if (i + 1 < 3)
                    res[i + 1][j] = !res[i + 1][j];
                if (j - 1 >= 0)
                    res[i][j - 1] = !res[i][j - 1];
                if (j + 1 < 3)
                    res[i][j + 1] = !res[i][j + 1];
            }
        }
    }
    for (auto line : res) {
        for (auto el : line)
            cout << el;
        cout << endl;
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
