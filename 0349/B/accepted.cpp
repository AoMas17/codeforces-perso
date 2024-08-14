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
    int v; cin >> v;
    map<int, int> m;
    int mini = INT_MAX;
    int imini = INT_MAX;
    FORi(9) {
        int tmp; cin >> tmp;
        m[i + 1] = tmp;
        if (tmp <= mini) {
            mini = tmp;
            imini = i + 1;
        }
    }
    if (v < mini) {
        cout << -1 << endl;
        return;
    }
    int nbmini = v / mini;
    v -= nbmini * mini;

    string res = "";
    char toadd = imini + '0';
    FORi(nbmini)
        res += toadd;

    int ind = 0;
    for (int i = 9; i > imini; i--) {
        while (m[i] - m[imini] <= v) {
            res[ind++] = i + '0';
            v -= (m[i] - m[imini]);
        }
    }

    cout << res << endl;

}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
