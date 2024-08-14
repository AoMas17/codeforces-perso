#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	if(k != 4){
		int maxi = 0;
		for(int i = 0; i < n; i++){
			int m = v[i] % k;
			if(m == 0){
				cout << 0 << endl;
				return;
			}
			if(m > maxi)
				maxi = m;
		}
		cout << k - maxi << endl;
	}
	else{
		int nbeven = 0;
		int nbodd = 0;
		int maxi = 0;
		for(int i = 0; i < n; i++){
			if(v[i] % 2 == 0){
				nbeven++;
			}
			else
				nbodd++;
			int m = v[i] % k;
			if(m == 0){
				cout << 0 << endl;
				return;
			}
			if(m > maxi)
				maxi = m;
		}
		if(nbeven > 1){
			cout << 0 << endl;
		}
		else if(maxi == 3){
			cout << 1 << endl;
		}
		else if(nbodd > 0 && nbeven > 0){
			cout << 1 << endl;
		}
		else if(nbodd > 1){
			cout << 2 << endl;
		}
		else{
			cout << 3 << endl;
		}
	}
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
