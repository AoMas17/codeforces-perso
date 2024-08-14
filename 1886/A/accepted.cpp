#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n; cin >> n;
	if(n < 7){
		cout << "NO" << endl;
		return;
	}
	int x = 1;
	int y = n/2;
	int z = y + n % 2 - 1;
	
	if(y == z){
		z--;
		x++;
	}
	while(y % 3 == 0 || z % 3 == 0){
		y--;
		z++;
	}
	
	if(x == y || y == z || x == z){
		cout << "NO" << endl;
		return;
	}
	
	cout << "YES" << endl;
	cout << x << " " << y << " " << z << endl;
	
	
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
