#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

string rev(string str){
	if(str.size() == 2){
		char tmp = str[0];
		str[0] = str[1];
		str[1] = tmp;
	}
	if(str.size() == 3){
		char tmp = str[0];
		str[0] = str[2];
		str[2] = tmp;
	}
	return str;
}

void Solve(){
    int n; cin >> n;
	set<string> s;
	for(int i = 0; i < n; i++){
		string str; cin >> str;
		if(s.find(rev(str)) != s.end()){
			cout << "YES" << endl;
			return;
		}
		if(str.size() == 1){
			cout << "YES" << endl;
			return;
		}
		else if(str.size() == 3){
			string tmp1 = "  ";
			tmp1 [0] = str[0];	tmp1 [1] = str[1];
			string tmp2 = "  ";
			tmp2[0] = str[1];	tmp2[1] = str[2];
			cout << str << " " << tmp1 << " " << tmp2 << endl; 
			if(s.find(rev(tmp1)) != s.end() || s.find(rev(tmp2)) != s.end()){
				cout << "YES" << endl;
				return;
			}
			s.insert(tmp1); s.insert(tmp2);
		}
		else
			s.insert(str);
	}
	cout << "NO" << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
