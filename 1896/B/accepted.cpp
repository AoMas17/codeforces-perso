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
    int pos = -1;
    int b = -1;
    FORi(n) {
        if (pos == -1 && s[i] == 'A') {
            pos = i;
        }
        if (s[i] == 'B')
            b = i;
    }
    if (pos == -1 || b == -1 || b - pos < 0)
        cout << 0 << endl;
    else {
        cout << abs(pos - b) << endl;
    }
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
