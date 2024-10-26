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
	string t; cin >> t;
	map<char, int> f1;
	for (auto el : s1)
		f1[el]++;
	for (auto el : s2)
		f1[el]++;
	map<char, int> f2;
	for (auto el : t)
		f2[el]++;
	if (f1 == f2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
