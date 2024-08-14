#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void out(char c) {
    cout << c << endl;
    return;
}

void Solve(){
    int x1, p1, x2, p2;
    cin >> x1 >> p1 >> x2 >> p2;
    if (x1 > x2) {
        while (x1 > x2 && p2 > 0) {
            x2 *= 10; p2--;
        }
    }
    else if (x2 > x1) {
        while (x2 > x1 && p1 > 0) {
            x1 *= 10; p1--;
        }
    }
    if (x1 > x2) {
        if (p1 >= p2) {
            out('>');
            return;
        }
        else {
            out('<');
            return;
        }
    }
    else if (x1 == x2) {
        if (p1 > p2) {
            out('>');
            return;
        }
        else if (p1 == p2) {
            out('=');
            return;
        }
        else {
            out('<');
            return;
        }
    }
    else {
        if (p1 > p2) {
            out('>');
            return;

        }
        else {
            out('<');
            return;
        }
    }
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
