#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n, k;
	cin >> n >> k;
	string str; cin >> str;
	
	map<char,int> m;
	set<int> mset;
	for(auto el : str){
		m[el]++;
		mset.insert(el);
	}
	for(auto el : mset){
		if(m[el] % 2 == 1 && k > 0){
			m[el]--;
			k--;
		}
	}
	int tmp = 0;
	for(auto el : mset){
		if(m[el] % 2 == 1){
			tmp++;
			if(tmp > 1){
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
