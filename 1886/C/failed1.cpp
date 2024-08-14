#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	string s; cin >> s;
	int pos; cin >> pos;
	int n = s.size();
	int ntmp = n;
	int postmp = pos;
	int prepos = pos;
	int i = 0;
	if(pos == 1){
		cout << s[0];
		return;
	}
	while(postmp > 0){
		i++;
		prepos = postmp;
		postmp -= ntmp;
		ntmp--;
	}
	
	int finalsize = n - i + 1;
	int j = prepos;
	
	string s2 = s;
	sort(s.begin(), s.begin() + n);
	
	int k = 0;
	int ind = 0;	
	while(ind < j){
		if(s2[k] > s[j]){
			k++;
		}
		else{
			k++;
			ind++;
		}
	}
	cout << s2[k-1];
	
	
	//cout << "j : " << j << endl;
	
	//cout << "s : " << s << endl;
	//cout << "i : " << i << endl; 
	
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
