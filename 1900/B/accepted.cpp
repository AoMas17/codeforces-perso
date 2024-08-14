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
    int a, b, c; cin >> a >> b >> c;
    a %= 2;
    b %= 2;
    c %= 2;
    if (a == b && b == c)
        cout << 1 << " " << 1 << " " << 1 << endl;
    else if (a == c)
        cout << 0 << " " << 1 << " " << 0 << endl;
    else if (b == c)
        cout << 1 << " " << 0 << " " << 0 << endl;
    else
        cout << 0 << " " << 0 << " " << 1 << endl;

}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
