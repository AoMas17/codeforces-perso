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

int gcd(int a, int b) {
    if (a == b)
        return a;   
    return gcd(max(a, b) - min(a, b), min(a, b));
}

void Solve(){
    int a, b, c; cin >> a >> b >> c;
    cout << 4 * (sqrt(a * b / c) + sqrt(b * c / a) + sqrt(a * c / b)) << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
