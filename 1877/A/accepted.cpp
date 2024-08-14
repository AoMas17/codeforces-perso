#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n; 
	cin >> n;
	int sum = 0;
	n--;
	while(n--){
		int a;
		cin >> a;
		sum += a;
	}
	cout << -sum << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
