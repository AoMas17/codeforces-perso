#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FORi(a) for (int i = 0; i < a; i++)
#define FORj(a) for (int j = 0; j < a; j++)
#define FORk(a) for (int k = 0; k < a; k++)
#define ull unsigned long long
#define ll long long

void Solve(){
    string s; cin >> s;
    string res = "";
    int deb = 0;
    while (deb + 2 < s.size() && s[deb] == 'W' && s[deb + 1] == 'U' && s[deb + 2] == 'B')
        deb += 3;
    //cout << deb << endl;
    for (int i = deb; i < s.size(); i++) {
        if (i + 2 < s.size() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            if ((i > 0 && s[i - 1] != 'B') || (i > 1 && s[i - 2] != 'U') || (i > 2 && s[i - 3] != 'W'))
                res += ' ';
            i += 2;
        }
        else {
            res += s[i];
        }
    }
    cout << res << endl;
}
	
int main(){
    Solve();
    return 0;
}
