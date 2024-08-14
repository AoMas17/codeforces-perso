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
    map<char, int> m;
    for (char el : s)
        m[el]++;
    int count = -1;
    for (auto el : m)
        count += el.second % 2;
    if (count <= 0)
        cout << "First" << endl;
    else if (count % 2)
        cout << "Second" << endl;
    else
        cout << "First" << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
