#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

bool beautiful(int x, int k){
	int sum = 0;
	while(x > 0){
		sum += x % 10;
		x /= 10;
	}
	return sum % k == 0;
}

void Solve(){
    int x; cin >> x;
	int k; cin >> k;
	while(!beautiful(x, k))
		x++;
	cout << x << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
