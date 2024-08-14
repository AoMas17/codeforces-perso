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
    ull res = 0;
    int cur = 0;
    FORi(n) {
        int next; cin >> next;
        if (cur > next) {
            res += cur - next;
            cur = next;
        }
        res += next - cur + 2;
        cur = next;
    }
    res--;
    cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
