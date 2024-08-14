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
    string s; cin >> s;
    string res = "";
    if (s[0] > '4' && s[0] != '9')
        s[0] = (9 - s[0] + '0' + '0');
    for (int i = 1; i < s.size(); i++) {
        if (s[i] > '4')
            s[i] = (9 - (s[i] - '0') + '0');
    }
    cout << s << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
