#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	int n; cin >> n;
	int pos = 20000;
	while(n--){
		int d; cin >> d;
		string s; cin >> s;
		if(pos == 20000 && s != "South"){
			cout << "NO" << endl;
			return;
		}
		if(pos == 0 && s != "North"){
			cout << "NO" << endl;
			return;
		}
		if(s == "South"){
			if(pos - d < 0){
				cout << "NO" << endl;
				return;
			}  
			pos = pos - d;
		}
		if(s == "North"){
			if(pos + d > 20000){
				cout << "NO" << endl;
				return;
			}
			pos = pos + d;
		}
	}
	if(pos != 20000){
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
