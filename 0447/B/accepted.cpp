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
    int k; cin >> k;
    map<char, int> m;
    char tmp = 'a';
    int maxi = -1;
    int lettermax = '-';
    FORi(26) {
        int val; cin >> val;
        maxi = max(maxi, val);
        lettermax = tmp;
        m[tmp++] = val;
    }
    int res = 0;
    int ind = 1;
    for (char el : s)
        res += m[el] * ind++;
    res += maxi * ((k + ind) * (k + ind - 1) / 2 - (ind - 1) * ind / 2);
    cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
