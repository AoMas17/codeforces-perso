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
    string s; cin >> s;
    int ind = -1;
    FORi(s.size()) {
        if ((s[i] - '0') % 2 == 0) {
            ind = i;
            if (s[s.size() - 1] > s[i]) {
                char tmp = s[i];
                s[i] = s[s.size() - 1];
                s[s.size() - 1] = tmp;
                cout << s << endl;
                return;
            }
        }
    }
    if (ind == -1)
        cout << ind << endl;
    else{
        char tmp = s[ind];
        s[ind] = s[s.size() - 1];
        s[s.size() - 1] = tmp;
        cout << s << endl;
    }
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
