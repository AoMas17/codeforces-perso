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
    set<int> v;
    FORi(n) {
        int a; cin >> a;
        v.insert(a);
    }
    set<int> w;
    do {
        w = v;
        int ind = 0;
        int prec;
        for (int el : v) {
            if (ind == 0) {
                prec = el;
            }
            else
                v.insert(el - prec);
            ind++;
            prec = el;
        }
    } while (v != w);
    for (int el : v) {
        cout << el * n << endl;
        break;
    }

}
	
int main(){ 
    Solve();
    return 0;
}
