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

bool isright(int x1, int y1, int x2, int y2, int x3, int y3) {
    if ((x1 == x2 && y1 == y2) || (x2 == x3 && y2 == y3) || (x1 == x3 && y1 == y3))
        return false;
    vector<int> v(3);
    v[0] = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    v[1] = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
    v[2] = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);
    sort(v.begin(), v.end());
    return (v[2] == v[1] + v[0]);
}

void Solve(){
    int x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (isright(x1, y1, x2, y2, x3, y3))
        cout << "RIGHT" << endl;
    else if (isright(x1+1, y1, x2, y2, x3, y3))
        cout << "ALMOST" << endl;
    else if (isright(x1, y1+1, x2, y2, x3, y3))
        cout << "ALMOST" << endl;
    else if (isright(x1, y1, x2+1, y2, x3, y3))
        cout << "ALMOST" << endl;
    else if (isright(x1, y1, x2, y2+1, x3, y3))
        cout << "ALMOST" << endl;
    else if (isright(x1, y1, x2, y2, x3+1, y3))
        cout << "ALMOST" << endl;
    else if (isright(x1, y1, x2, y2, x3, y3+1))
        cout << "ALMOST" << endl;
    else if (isright(x1-1, y1, x2, y2, x3, y3))
        cout << "ALMOST" << endl;
    else if (isright(x1, y1-1, x2, y2, x3, y3))
        cout << "ALMOST" << endl;
    else if (isright(x1, y1, x2-1, y2, x3, y3))
        cout << "ALMOST" << endl;
    else if (isright(x1, y1, x2, y2-1, x3, y3))
        cout << "ALMOST" << endl;
    else if (isright(x1, y1, x2, y2, x3-1, y3))
        cout << "ALMOST" << endl;
    else if (isright(x1, y1, x2, y2, x3, y3-1))
        cout << "ALMOST" << endl;
    else
        cout << "NEITHER" << endl;

}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
