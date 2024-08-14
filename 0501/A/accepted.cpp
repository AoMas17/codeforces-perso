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
    float a, b, c, d; cin >> a >> b >> c >> d;
    float m = max(3*a/10, a - a * c / 250);
    float v = max(3*b/10, b - b * d / 250);
    if (m > v)
        cout << "Misha" << endl;
    else if (m < v)
        cout << "Vasya" << endl;
    else
        cout << "Tie" << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
