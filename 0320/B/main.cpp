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
    int n; cin >> n;
	vector<set<pair<int,int>>> v;
	vector<pair<int,int>> list;
	while(n--){
		int t, x, y; cin >> t >> x >> y;
		pair<int,int> curpair = make_pair(x,y);
		if(t == 1){
			list.push_back(curpair);
			FORi(v.size()){
				auto el = v[i];
				for(auto p : el){
					if((p.first < x && x < p.second) || (p.first < y && y < p.second)){
						v[i].insert(curpair);
						break;
					}			
				}
			}
			set<pair<int,int>> news = {curpair};
			v.push_back(news);
			for(auto test : list){
				FORi(v.size()){
					auto el = v[i];
					for(auto p : el){
						if((p.first < test.first && test.first < p.second) || (p.first < test.second && test.second < p.second)){
							v[i].insert(test);
							break;
						}			
					}
				}
			}
		}
		else{
			bool cond = false;
			for(auto el : v){
				if((el.find(list[x - 1]) != el.end()) && (el.find(list[y - 1]) != el.end())){
					cond = true;
					break;
				}
			}
			if(cond)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	/*
	for (auto el : v){
		cout << "size : " << el.size() << ", ";
		for (auto p : el){
			cout << p.first << " " << p.second << "   ";
		}
		cout << endl;
	}
	*/
}
	
int main(){ 
    init; 
	Solve();
    return 0;
}
