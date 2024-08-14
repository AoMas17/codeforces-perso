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
    int r1, c1, r2, c2; cin >> r1 >> c1 >> r2 >> c2;
    if (r1 == r2 || c1 == c2) {
        if ((r1 + c1) % 2 != (r2 + c2) % 2)
            cout << "1 0 " << abs(r2 - r1 + c2 - c1) << endl;
        else
            cout << "1 2 " << abs(r2 - r1 + c2 - c1) << endl;
    }
    else {
        int distr = abs(r2 - r1);
        int distc = abs(c2 - c1);
        int king = max(distr, distc);
        if ((r1 + c1) % 2 != (r2 + c2) % 2)
            cout << "2 0 " << king << endl;
        else if (distr == distc)
            cout << "2 1 " << king << endl;
        else
            cout << "2 2 " << king << endl;
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
