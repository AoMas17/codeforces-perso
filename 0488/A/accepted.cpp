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

bool islucky(ll a) {
    int res = false;
    while (!res && a) {
        if (abs(a % 10) == 8)
            res = true;
        a /= 10;
    }
    return res;
}

void Solve(){
    ll a; cin >> a;
    int res = a;
    a++;
    while (!islucky(a))
        a++;
    cout << a - res << endl;

}
	
int main(){ 
    Solve();
    return 0;
}
