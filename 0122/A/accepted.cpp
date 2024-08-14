#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int x; cin >> x;
    int ln[14] = { 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777 };
    int tmp = x;
    int cond = 1;
    while(cond && tmp != 0){
        if (tmp % 10 != 4 && tmp % 10 != 7)
            cond = 0;
        tmp /= 10;
    }
    if (cond)
        cout << "YES" << endl;
    else {
        for (int i = 0; i < 14; i++) {
            if (x % ln[i] == 0) {
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
    }
}
	
int main(){ 
    Solve();
    return 0;
}
