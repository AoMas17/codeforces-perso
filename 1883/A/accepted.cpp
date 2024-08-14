#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	string n; cin >> n;
	vector<int> v = {1,2,3,4,5,6,7,8,9,0};
	int r = 0;
	int tmp = 0;
	for (auto c : n){
		int i = c - '0';
		int x = 0;
		for (int j = 0; j < 10; j++){
			if (v[j] == i){
				x = j;
				break;
			}
		}
		r += abs(tmp - x) + 1;
		tmp = x;
	}
	cout << r << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
