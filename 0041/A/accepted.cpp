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
    string s, t;
    cin >> s >> t; 
    bool cond = s.size() == t.size();
    if (cond){
        for (int i = 0; i < s.size(); i++){
            if (s[i] != t[s.size() - i - 1]){
                cond = false;
                break;
            }
        }
    }
    if (cond){
        cout << "YES";
    } else {
        cout << "NO";
    }
    cout << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
