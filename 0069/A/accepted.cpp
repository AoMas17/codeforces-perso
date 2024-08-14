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
    int n; cin >> n;
    int s1 = 0;
    int s2 = 0;
    int s3 = 0;
    FORi(n) {
        int a, b, c;
        cin >> a >> b >> c;
        s1 += a;
        s2 += b;
        s3 += c;
    }
    if (s1 == 0 && s2 == 0 && s3 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
