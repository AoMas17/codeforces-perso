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
	int tot = 0;
	FORi(n){
		int a; cin >> a;
		tot += a;
	}
	float res = (long double)tot / n;
	printf("%.16f\n",res);
}
	
int main(){ 
    init; 
	Solve();
    return 0;
}
