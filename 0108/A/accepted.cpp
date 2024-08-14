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
    int h = (s[0] - '0') * 10 + s[1] - '0';
    int m = (s[3] - '0') * 10 + s[4] - '0';
    do {
        m++;
        if (m == 60) {
            m = 0;
            h++;
            if (h == 24)
                h = 0;
        }
    } while (h / 10 != m % 10 || h % 10 != m / 10);
    s[0] = h / 10 + '0';
    s[1] = h % 10 + '0';
    s[3] = m / 10 + '0';
    s[4] = m % 10 + '0';
    cout << s << endl;
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
