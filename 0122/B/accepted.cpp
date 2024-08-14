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
    int nb4 = 0;
    int nb7 = 0;
    for (char el : s) {
        if (el == '4')
            nb4++;
        else if (el == '7')
            nb7++;
    }
    if (nb4 == 0 && nb7 == 0)
        cout << -1 << endl;
    else if (nb4 >= nb7)
        cout << 4 << endl;
    else
        cout << 7 << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
