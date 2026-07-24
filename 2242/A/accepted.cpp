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
    int k; cin >> k;
    int nb2 = 0;
    int nb3 = 0;
    while(k--){
        int c; cin >> c;
        if (c >= 3){
            nb3++;
        }
        if (c >= 2) nb2++;
    }
    if (nb3 >= 1 || nb2 >= 2) 
        cout << "YES\n";
    else
        cout << "NO\n";
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
