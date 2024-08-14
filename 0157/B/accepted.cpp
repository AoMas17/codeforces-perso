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
    long double res = 0;
    vector<int> v(n);
    FORi(n)
        cin >> v[i];
    long double pi = 3.141592653589793115997963468544185161590576171875;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++){
        int cur = v[n - i - 1];
        if (i % 2 == 0) 
            res += cur * cur * pi;
        else
            res -= cur * cur * pi;
    }
    printf("%.48Lf\n", res);
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
