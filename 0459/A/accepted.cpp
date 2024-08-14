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
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    int diffx = abs(x1 - x2);
    int diffy = abs(y1 - y2);
    if (diffx == 0 && diffy != 0) {
        cout << x1 - diffy << " " << y1 << " " << x2 - diffy << " " << y2 << endl;
    }
    else if (diffy == 0 && diffx != 0) {
        cout << x1 << " " << y1 - diffx << " " << x2 << " " << y2 - diffx << endl;
    }
    else {
        if (diffx != diffy)
            cout << -1 << endl;
        else
            cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
    }
}
	
int main(){
    Solve();
    return 0;
}
