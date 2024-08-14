#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n; cin >> n;
    vector<int> res(n);
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        res[a - 1] = i + 1;
    }
    for (int i = 0; i < n; i++)
        cout << res[i] << ' ';
    cout << endl;
        
}
	
int main(){ 
    Solve();
    return 0;
}
