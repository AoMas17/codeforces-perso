#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a < min)
            min = a;
        v[i] = a;
    }
    int c = n / 2;
    int i = 0;
    while (c) {
        if (v[i] != min) {
            cout << v[i] << " " << min << endl;
            c--;
        }
        i++;
    }

}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
