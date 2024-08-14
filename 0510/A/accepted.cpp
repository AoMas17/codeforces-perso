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
    string line = "#";
    string l = "#";
    string r = "#";
    FORi(m - 1) {
        line += '#';
        l += '.';
        r = "." + r;
    }
    int rturn = 1;
    FORi(n) {
        if (i % 2 == 0)
            cout << line << endl;
        else {
            if (rturn % 2 == 1)
                cout << r << endl;
            else
                cout << l << endl;
            rturn++;
            rturn %= 2;
        }
    }
}
	
int main(){ 
    Solve();
    return 0;
}
