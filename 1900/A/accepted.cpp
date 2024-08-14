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
    int res = 0;
    int ind = 0;
    while (ind < n) {
        int count = 0;
        while (ind < n && s[ind] != '#') {
            ind++;
            count++;
            if (count == 3) {
                cout << 2 << endl;
                return;
            }
        }
        res += count;
        while (ind < n && s[ind] == '#')
            ind++;
    }
    cout << res << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
