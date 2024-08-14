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
    int n, m; cin >> n >> m;
    map<string, string> dict;
    FORi(m) {
        string a, b; cin >> a >> b;
        if (a.size() <= b.size())
            dict[b] = a;
        else
            dict[a] = b;
    }
    FORi(n) {
        string in; cin >> in;
        if (dict[in] != "")
            cout << dict[in];
        else
            cout << in;
        cout << " ";
    }
    cout << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
