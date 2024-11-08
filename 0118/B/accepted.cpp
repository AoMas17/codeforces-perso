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
    int n; cin >> n;

    FORi(n * 2 + 1){
        FORj(abs(n - i) * 2){
            cout << " ";
        }
        FORj(n - abs(n - i) + 1){
            cout << j;
            if (j != n - abs(n - i) || j != 0)
                cout << " ";
        }
        FORj(n - abs(n - i)){
            cout << (n - abs(n - i)) - j - 1;
            if ((n - abs(n - i)) - j - 1 != 0)
                cout << " ";
        }
        cout << endl;
    }
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
