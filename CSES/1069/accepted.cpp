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

    ll ind = 1;
    ll max = 1;
    ll curv = 1;
    char cur = s[0];

    while (s[ind])
    {
        if (cur == s[ind])
            curv++;
        else
        {
            curv = 1;
            cur = s[ind];
        }    
        max = std::max(max, curv);
        ind++;
    }
    cout << max << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
