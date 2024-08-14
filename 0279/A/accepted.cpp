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
    int x, y; cin >> x >> y;
    
    if (x == 0 && y == 0) {
        cout << 0 << endl;
        return;
    }

    if (x > 0 && (1 - x < y && y < x))
        y = x;
    else if (y > 0 && (-y < x && x < y))
        x = -y;
    else if (x < 0 && (x < y && y < -x))
        y = x;
    else if (y < 0 && (y < x && x < -y + 1))
        x = -y + 1;

    if (x > 0) {
        int res = 4 * (x - 1);
        if (y > 0)
            res++;
        cout << res << endl;
    }
    else {
        int res = (-x - 1) * 4 + 2;
        if (y < 0)
            res++;
        cout << res << endl;
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
