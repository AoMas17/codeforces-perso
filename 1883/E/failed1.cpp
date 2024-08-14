#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n; cin >> n;
	vector<long long> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	int res = 0;
	for(int i = 1; i < n; i++){
		while(v[i] < v[i - 1]){
			v[i] *= 2;
			res++;
		}
	}
	cout << res << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
