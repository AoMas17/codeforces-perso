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
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    vector<int> v(n);
    FORi(n)
        cin >> v[i];
    int sum = 0;
    int nbeven = 0;
    int nbodd = 0;
    FORi(n)
    {
        sum += v[i];
        if (v[i] % 2)
            nbodd++;
        else 
            nbeven++;
    }
    if (sum % 2)
        cout << nbodd << endl;
    else
        cout << nbeven << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
