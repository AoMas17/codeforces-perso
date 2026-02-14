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
    ll n; cin >> n;
    string s; cin >> s;
    map<char, int> m1, m2;

    for (auto el : s)
    {
        m1[el]++;
    }

    size_t maxi = m1.size();
    for (auto el : s)
    {
        m1[el]--;
        if (m1[el] == 0)
            m1.erase(el);
        m2[el]++;
        maxi = max(maxi, m1.size() + m2.size());
    }

    cout << maxi << endl;

}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
