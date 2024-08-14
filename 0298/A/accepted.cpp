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
    string s; cin >> s;
    int FR = -1;
    FORi(n) {
        if (s[i] == 'R') {
            FR = i;
            break;
        }
    }
    if (FR == -1) {
        int FL = -1;
        FORi(n) {
            if (s[i] == 'L') {
                FL = i;
                break;
            }
        }
        int LL;
        for (LL = FL + 1; LL < n; LL++) {
            if (s[LL] != 'L')
                break;
        }
        cout << LL << " " << FL << endl;
    }
    else {
        int LR;
        for (LR = FR + 1; LR < n; LR++) {
            if (s[LR] != 'R')
                break;
        }
        if (s[LR + 1] != 'L')
            LR++;
        cout << FR + 1 << " " << LR << endl;
    }
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
