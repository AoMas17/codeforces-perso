#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    set<int> s;
    for (auto el : v)
        s.insert(el);
    if (s.size() > 2) {
        cout << "NO" << endl;
        return;
    }
    if (s.size() == 1) {
        cout << "YES" << endl;
        return;
    }
    int nb1;
    int nb2;
    int i = 1;
    for (auto el : s) {
        if (i == 1) {
            nb1 = el;
            i++;
        }
        else
            nb2 = el;
    }
    int cp1 = 0;
    int cp2 = 0;
    for (auto el : v) {
        if (el == nb1)
            cp1++;
        else
            cp2++;
    }
    if (cp1 == cp2 || cp1 + 1 == cp2 || cp1 - 1 == cp2) {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
