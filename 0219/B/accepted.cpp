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
    ll p,  d; cin >> p >> d;
	bool cond = true;
	int i = 0;
	while(cond){
		//cout << p << " " << i << endl;
		string tmp = to_string(p);
		ll to_9 = (tmp[tmp.size() - i - 1] - '0' + 1) * pow(10, i);
		//cout << to_9 << endl; 
		if (i < tmp.size() && tmp[tmp.size() - i - 1] != '9' && 0 <= d && d >= to_9){
			d -= to_9;
			p -= to_9;
		}
		i++;
		if (i >= tmp.size())
			cond = false;
	}	
	cout << p << endl;
	
}
	
int main(){ 
    init;
	Solve();
    return 0;
}
