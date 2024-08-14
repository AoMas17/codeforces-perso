#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    string s; cin >> s;
    for (char el : s) {
        int decal = 0;
        if (el >= 'A' && el <= 'Z')
            el += 'a' - 'A';
        set<char> vowels = { 'a','e','i','o','u','y' };
        if (vowels.find(el) == vowels.end())
            cout << '.' << el;
    }
    cout << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
