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
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    map<char, int> m1, m2;
    for (int i = 0; i < s1.size(); i++){
        m1[s1[i]]++;
    }
    for (int i = 0; i < s2.size(); i++){
        m2[s2[i]]++;
    }
    for (pair<char, int> p : m2){
        if (m1[p.first] < p.second && p.first != ' '){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
