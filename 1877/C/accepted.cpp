#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n, m, k;
	cin >> n >> m >> k;
	if(k == 1){
		cout << 1 << endl;
		return;
	}
	if(k > 3){
		cout << 0 << endl;
		return;
	}
	if(k == 2){
		int res = min(n,m);
		if(m > n){
			res += (m - n) / n;
		}
		cout << res << endl;
		return;
	}
	if(k == 3){
		int res = 0;
		if(m > n){
			res += (m - n) - ((m - n) / n);
		}
		cout << res << endl;
		return;
	}	
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
