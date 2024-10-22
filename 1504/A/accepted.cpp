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
	int n = s.size();
	int ind = -1;
	FORi(n){
		if (s[i] != 'a'){
			ind = i;
			break;
		}
	}
	if (ind == -1){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
		ind = n - ind - 1;
		if (ind >= n / 2){
			
			ind = min(n, ind + 1);
		}
		else{
			ind = max(0, ind - 1);
		}
			
		FORi(n){
			if (i == ind)
				cout << 'a';
			cout << s[i];
		}
		if (ind == n)
			cout << 'a';
		cout << endl;
	}
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
