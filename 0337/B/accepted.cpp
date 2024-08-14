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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int ta = a * c;
    int tb = b * c;
    int tc = c * a;
    int td = d * a;
    
    int num1 = 1;
    int den1 = 1;

    if (td <= tb) {
        num1 = tb - td;
        den1 = tb;
    }

    int num2 = 1;
    int den2 = 1;

    ta = a * d;
    tb = b * d;
    tc = c * b;
    td = d * b;

    if (tc <= ta) {
        num2 = ta - tc;
        den2 = ta;
    }

    double res1 = num1 / den1;
    double res2 = num2 / den2;

    if (res2 < res1) {
        num1 = num2;
        den1 = den2;
    }

    int g = __gcd(num1, den1);
    while (g != 1) {
        num1 /= g;
        den1 /= g;
        g = __gcd(num1, den1);
    }

    cout << num1 << '/' << den1 << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
