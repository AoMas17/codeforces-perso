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
    n--;
    int a, b; cin >> a >> b;
    int m = a;
    while (n--){
	    m = min(max(a,b), m);
	    a = b; cin >> b;
    }
    m = min(m,b);
    cout << m << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
