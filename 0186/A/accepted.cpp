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
    string s1, s2; cin >> s1 >> s2;
    if (s1.size() != s2.size()) {
        cout << "NO" << endl;
        return;
    }
    map<char, int> m1, m2;
    FORi(s1.size())
        m1[s1[i]]++;
    FORi(s2.size())
        m2[s2[i]]++;
    int nbdiffs = 0;
    FORi(s1.size())
        if (s1[i] != s2[i])
            nbdiffs++;
    if (nbdiffs == 2 && m1 == m2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
