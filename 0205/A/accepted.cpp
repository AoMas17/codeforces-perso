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
    vector<int> v(n);
    FORi(n)
        cin >> v[i];
    int m = 0;
    for (int i = 1; i < n; i++){
        if (v[i] < v[m])
            m = i;
    }
    int count = 0;
    for (int el : v){
        if (el == v[m])
            count++;
    }
    if (count == 1)
        cout << m + 1 << endl;
    else
        cout << "Still Rozdil" << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
