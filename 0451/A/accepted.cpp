#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FORi(a) for (int i = 0; i < a; i++)
#define FORj(a) for (int j = 0; j < a; j++)
#define FORk(a) for (int k = 0; k < a; k++)
#define ull unsigned long long
#define ll long long

void Solve(){
    int n, m; cin >> n >> m;
    n = min(n, m);
    int nbsticks = n << 1;
    if (nbsticks % 4 == 0) {
        cout << "Malvika" << endl;
        return;
    }
    else {
        cout << "Akshat" << endl;
    }
}
	
int main(){ 
    Solve();
    return 0;
}
