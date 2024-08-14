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

bool isallnb(string& s) {
    FORi(s.size()) {
        if (s[i] < '0' || s[i] > '9')
            return false;
    }
    return true;
}

void Solve(){
    int n; cin >> n;
    int res = 0;

    vector<string> v = { "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE" };
    set<string> alc;
    for (auto el : v) 
        alc.insert(el);

    FORi(n) {
        string s; cin >> s;
        if (isallnb(s)) {
            if (stoi(s) < 18)
                res++;
        }
        else if (alc.find(s) != alc.end())
            res++;
    }

    cout << res << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
