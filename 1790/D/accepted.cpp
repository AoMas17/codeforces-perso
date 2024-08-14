#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	int n; cin >> n;
	set<int> s;
	map<int,int> m;
	for(int i = 0; i < n; i++){
		int a; 	
		cin >> a;
		s.insert(a);
		m[a]++;
	}
	int res = 0;
	while(s.size() != 0){
		int cur; 
		for(auto e : s){
			cur = e; 
			break;
		}
		m[cur]--;
		if (m[cur] == 0){
			m.erase(cur); s.erase(cur);
		}
		int less = cur - 1; int more = cur + 1;
		while(s.find(less) != s.end()){
			m[less]--;
			if(m[less] == 0){
				m.erase(less); s.erase(less);
			}
			less--;
		}
		while(s.find(more) != s.end()){
			m[more]--;
			if(m[more] == 0){
				m.erase(more); s.erase(more);
			}
			more++;
		}
		res++;
	}
	cout << res << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
