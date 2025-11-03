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
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    int first_b = b;


    set<pair<int,int>> s;

    while (a <= x && b <= y)
    {
        if (a > b)
        {
            s.insert(make_pair(a, b));

            if (b == y)
            {
                a++;
                b = first_b;
            }

            else
                b++;
        }

        else
        {
            a++;
            b = first_b;
        }
    }

    cout << s.size() << endl;
    for (auto el : s)
    {
        cout << el.first << ' ' << el.second << endl;
    }
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
