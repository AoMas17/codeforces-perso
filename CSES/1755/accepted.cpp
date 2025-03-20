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

string mult(char s, int x)
{
    string res = "";
    FORi(x) res += s;
    return res;
}

void Solve(){
    string s; cin >> s;
    map<char, int> m;
    for (auto el : s) m[el]++;

    string res = "";
    char odd = -1;
    int odd_nb = 0; 
    for (auto el : m)
    {
        if (el.second & 1)
        {
            if (odd != -1)
            {
                cout << "NO SOLUTION" << endl;
                return;
            }
            else
            {
                odd = el.first;
                odd_nb = el.second;
            }
        }
        else
        {
            res += mult(el.first, (el.second / 2));
        }
    }

    if ((odd == -1 && s.size() & 1) || (odd != -1 && !(s.size() & 1)))
    {
        cout << "NO SOLUTION" << endl;
        return;
    }

    res += mult(odd, odd_nb);
    string toappend = "";

    for (auto el : m)
    {
        if (el.second & 1)
            continue;
        
        toappend = mult(el.first, el.second / 2) + toappend;
    }

    res += toappend;
    cout << res << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
