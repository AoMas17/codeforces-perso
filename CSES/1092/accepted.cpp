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
    ll n; cin >> n;
    if (n % 4 == 1 || n % 4 == 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        
        if (n % 4 == 0)
        {
            int b = 1;
            cout << n / 2 << endl;
            for (int i = n; i >= 1; )
            {
                cout << i << ' ';
                i -= b++ % 2 ? 3 : 1;
            }
            cout << endl << n / 2 << endl;

            b = 0;
            for (int i = n - 1; i >= 1; )
            {
                cout << i << ' ';
                i -= b++ % 2 ? 3 : 1;
            }
            cout << endl;
        }

        else
        {
            int b = 1;
            cout << n / 2 << endl;
            for (int i = n; i >= 3; )
            {
                cout << i << ' ';
                i -= b++ % 2 ? 3 : 1;
            }
            cout << endl << n / 2 + 1 << endl;

            b = 0;
            for (int i = n - 1; i >= 1; )
            {
                cout << i << ' ';
                i -= b++ % 2 ? 3 : 1;
            }
            cout << endl;
        }
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
