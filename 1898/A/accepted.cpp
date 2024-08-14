#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve() {
    int n, k;
    cin >> n >> k;
    string s; cin >> s;
    int nbA = 0;
    int nbB = 0;
    for (char el : s) {
        if (el == 'A')
            nbA++;
        else
            nbB++;
    }
    if (nbB == k) {
        cout << 0 << endl;
        return;
    }
    if (nbB > k) {
        int tohave = nbB - k;
        int i;
        for (i = 0; i < n; i++) {
            if (s[i] == 'B')
                tohave--;
            if (!tohave)
                break;
        }
        cout << 1 << endl << i + 1 << " " << 'A' << endl;
        return;
    }
    if (nbB < k) {
        int tohave = k - nbB;
        int i;
        for (i = 0; i < n; i++) {
            if (s[i] == 'A')
                tohave--;
            if (!tohave)
                break;
        }
        cout << 1 << endl << i + 1 << " " << 'B' << endl;
        return;
    }
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
