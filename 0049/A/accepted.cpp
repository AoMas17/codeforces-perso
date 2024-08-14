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
    string s = "";
    do {
        string tmp; cin >> tmp;
        s += tmp;
    } while (s[s.size() - 1] != '?');
    int n = s.size() - 2;
    while (s[n] == ' ')
        n--;
    set<char> vowels = { 'A', 'E', 'I', 'O', 'U', 'Y', 'a', 'e', 'i', 'o', 'u', 'y' };
    if (vowels.find(s[n]) != vowels.end())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
