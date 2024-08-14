#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

string to_bin(int x){
	string res = "";
	while(x){
		res = (char)(x % 2 + 48) + res;
		x >>= 1;
	}
	return res;
}

int from_bin(string x){
	int res = 0;
	for(int i = 0; i < x.size(); i++){
		if(x[i] == '1')
			res += pow(2, x.size() - i - 1);
	}
	return res;
}

void test(int a, int b, int x, string sa, string sb, int l, int i, int* r1, int* r2){
	//cout << x << " " << a << " " << b << endl;
	if(*r1 != -1 && *r2 != -1)
		return;
	int tmp = (a+b)/2;
	if(tmp < x){
		*r1 = -1;
		*r2 = -1;
		return;
	}
	if(tmp == x){
		*r1 = a;
		*r2 = b;
		return;
	}
	if(i == l){
		*r1 = -1;
		*r2 = -1;
		return;
	}
	test(a, b, x, sa, sb, l, i + 1, r1, r2);
	if(*r1 == -1){
		if(sa[i] == sb[i]){
			a -= pow(2, l - i - 1);
			b -= pow(2, l - i - 1);
			test(a, b, x, sa, sb, l, i + 1, r1, r2);
		}

	}		
	return;
}

void Solve(){
    int x; cin >> x;
	string sx;
	sx = to_bin(x);
	sx = '0' + sx;
	int l = sx.size();
	int b = pow(2, l) - 1;
	string sb = "";
	for(int i = 0; i < l; i++){
		sb += '1';
	}
	string sa = "";
	for(int i = 0; i < l; i++){
		if(sx[i] == '0')
			sa += '1';
		else
			sa += '0';
	}
	int a =	from_bin(sa);
	
	int r1 = -1;
	int	r2 = -1; 
	int i = 0;
	//cout << x << " " << a << " " << b << " " << sx << " " << sa << " " << sb << endl;
	test(a, b, x, sa, sb, l, i, &r1, &r2);
	
	if(r1 != -1 && r2 != -1)
		cout << r1 << " " << r2 << endl;
	else
		cout << -1 << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
