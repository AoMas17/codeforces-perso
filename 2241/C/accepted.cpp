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

bool isPalindrome(string s){
    int n = s.size();
    for(int i = 0; i < n/2; i++){
        if(s[i] != s[n-i-1]) return false;
    }
    return true;
}

void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    int c = 0;
    for (int i = 0; i < n - 1; i++){
        if (s[i] != s[i + 1]){
            c++;
        }
    }
    if (c == 1){
        cout << 2 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
