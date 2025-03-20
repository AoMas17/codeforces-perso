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

void towerOfHanoi(int n, int from_rod, int to_rod, int aux_rod)
{
    if (n == 1)
    {
        cout << from_rod << ' ' << to_rod << endl;
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << from_rod << ' ' << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

void Solve(){
    int n; cin >> n;
    cout << (1 << n) - 1 << endl;
    towerOfHanoi(n, 1, 3, 2);
}
	
int main(){ 
    init;
    Solve();
    return 0;
}
