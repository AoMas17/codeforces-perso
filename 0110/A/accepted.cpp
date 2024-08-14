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
    string s; cin >> s;
    int nb = 0;
    for (char el : s) {
        if (el == '4' || el == '7')
            nb++;
    }
    if (nb == 4 || nb == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
