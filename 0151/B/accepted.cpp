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

bool taxi(string s) {
    set<char> ver;
    for (char el : s)
        ver.insert(el);
    return ver.size() == 2;
}

bool pizza(string s) {
    set<char> ver;
    for (char el : s)
        ver.insert(el);
    if (s[0] > s[1] && s[1] > s[3] && s[3] > s[4] && s[4] > s[6] && s[6] > s[7])
        return ver.size() == 7;
    return false;
}

void Solve(){
    int n; cin >> n;
    int taximax = -1;
    int pizzamax = -1;
    int girlmax = -1;
    string taxiguy = "";
    string pizzaguy = "";
    string girlguy = "";
    FORi(n) {
        int Si; cin >> Si;
        string s; cin >> s;
        int t = 0;
        int p = 0;
        int g = 0;
        FORj(Si) {
            string number; cin >> number;
            if (taxi(number))
                t++;
            else if (pizza(number))
                p++;
            else
                g++;
        }
        if (t == taximax) {
            taximax = t;
            taxiguy += ", " + s;
        }
        if (p == pizzamax) {
            pizzamax = p;
            pizzaguy += ", " + s;
        }
        if (g == girlmax) {
            girlmax = g;
            girlguy += ", " + s;
        }
        if (t > taximax) {
            taximax = t;
            taxiguy = s;
        }
        if (p > pizzamax) {
            pizzamax = p;
            pizzaguy = s;
        }
        if (g > girlmax) {
            girlmax = g;
            girlguy = s;
        }
    }
    cout << "If you want to call a taxi, you should call: " << taxiguy << "." << endl;
    cout << "If you want to order a pizza, you should call: " << pizzaguy << "." << endl;
    cout << "If you want to go to a cafe with a wonderful girl, you should call: " << girlguy << "." << endl;
    //cout << pizza("95-43-21") << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
