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
    int k; cin >> k;
    string s; cin >> s;
    map<char, int> m;
    for (char el : s)
    {
        m[el]++;
    }
    string res = "";
    for (auto el : m)
    {
        if (el.second % k != 0)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            FORi(el.second / k)
                res += el.first;
        }
    }
    FORi(k)
    {   
        cout << res;
    }
    cout << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
