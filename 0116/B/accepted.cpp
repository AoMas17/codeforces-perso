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
    vector<string> tab(n);
    FORi(n)
        cin >> tab[i];
    bool cond = true;
    int res = 0;
    while (cond) {
        cond = false;
        FORi(n) {
            FORj(m) {
                if (tab[i][j] == 'W') {
                    int nbneigh = 0;
                    int x = 0;
                    int y = 0;
                    if (0 < i && tab[i - 1][j] == 'P') {
                        nbneigh++;
                        x = i - 1;
                        y = j;
                    }
                    if (0 < j && tab[i][j - 1] == 'P') {
                        nbneigh++;
                        x = i;
                        y = j - 1;
                    }
                    if (i + 1 < n && tab[i + 1][j] == 'P') {
                        nbneigh++;
                        x = i + 1;
                        y = j;
                    }
                    if (j + 1 < m && tab[i][j + 1] == 'P') {
                        nbneigh++;
                        x = i;
                        y = j + 1;
                    }
                    if (nbneigh == 1) {
                        tab[i][j] = '.';
                        tab[x][y] = '.';
                        cond = true;
                        res++;
                    }
                    else if (nbneigh == 0)
                        tab[i][j] = '.';
                }
            }
        }
    }
    FORi(n) {
        FORj(m) {
            if (tab[i][j] == 'W')
                res++;
        }
    }
    cout << res << endl;

}
	
int main(){ 
    init;
    Solve();
    return 0;
}
