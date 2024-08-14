#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	int n, k;
	cin >> n >> k;
	int goal = 240;
	goal -= k;
	int res = 0;
	while(goal > 0 && n > 0){
		goal -= (res + 1) * 5;
		if(goal >= 0)
			res++;
		n--;
	}
	cout << res << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
