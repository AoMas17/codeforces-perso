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

set<string> gen(string s, set<string> den)
{
    if (s == "")
        return set<string>();
    if (den.size() == 0)
    {
        set<string> tot;
        for (int i = 0; s[i]; i++)
        {
            set<string> res;
            res.insert(string(1, s[i]));

            string cpy = s;
            cpy.erase(cpy.begin() + i);
            res = gen(cpy, res);

            for (auto el : res)
                tot.insert(el);
        }
        return tot;
    }

    else
    {
        set<string> tot;
        for (auto el : den)
            tot.insert(el);
        for (int i = 0; s[i]; i++)
        {
            set<string> res;
            for (auto el : den)
            {
                res.insert(string(1, s[i]) + el);
            }

            string cpy = s;
            cpy.erase(cpy.begin() + i);
            if (cpy.size() == 0)
            {
                for (auto el : res)
                    tot.insert(el);
            }
            res = gen(cpy, res);

            for (auto el : res)
                tot.insert(el);
        }
        return tot;
    }
}

void Solve(){
    string s; cin >> s;
    if (s.size() == 1)
    {
        cout << 1 << endl;
        cout << s << endl;
        return;
    }

    set<string> den;
    set<string> res = gen(s, den);
    set<string> fres;
    for (auto el : res)
    {
        if (el.size() == s.size())
            fres.insert(el);
    }
    cout << fres.size() << endl;
    for (auto el : fres)
        cout << el << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
