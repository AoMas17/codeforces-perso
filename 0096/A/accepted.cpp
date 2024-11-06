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
    string s;
    cin >> s;
    int count = 1;
    for (int i = 1; i < s.size(); i++){
        if (s[i - 1] == s[i]){
            count++;
            if (count == 7){
                cout << "YES" << endl;
                return;
            }
        }
        else{
            count = 1;
        }
    }
    cout << "NO" << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
