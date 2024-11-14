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
    ll t; cin >> t;
    ll sx, sy, ex, ey; cin >> sx >> sy >> ex >> ey;
    string s; cin >> s;
    ll togox = abs(sx - ex);
    ll togoy = abs(sy - ey);
    char goodx;
    char goody;
    if (ex > sx)
        goodx = 'E';
    else 
        goodx = 'W';
    if (ey > sy)
        goody = 'N';
    else
        goody = 'S';
    int res = 0;
    //cout << goodx << ' ' << goody << endl;
    //cout << togox << ' ' << togoy << endl;
    //cout << s << endl;
    while (s[res] && (togox > 0 || togoy > 0))
    {
        char cur = s[res++];
        //cout << cur << endl;
        if (cur == goodx)
            togox--;
        else if (cur == goody)
            togoy--;
    }
    if (togox <= 0 && togoy <= 0)
        cout << res << endl;
    else
        cout << -1 << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
