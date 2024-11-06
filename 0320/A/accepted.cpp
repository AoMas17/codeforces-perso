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

bool is_magic_nb(string s)
{
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '1' && s[i] != '4')
            return false;
    }
    for (int i = 0; i < n; i++)
    {
        if (i < n - 2 && s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
            i += 2;
        else if (i < n - 1 && s[i] == '1' && s[i + 1] == '4')
            i++;
        else if (s[i] == '1')
            continue;
        else
            return false;
    }
    return true;
}

void Solve(){
    string s; cin >> s;
    if (is_magic_nb(s))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
