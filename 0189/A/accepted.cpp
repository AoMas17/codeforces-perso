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
    int n, a, b, c; cin >> n >> a >> b >> c;
    vector<int> v = { a, b, c };
    sort(v.begin(), v.end());
    a = v[2];
    b = v[1];
    c = v[0];
    int bya = n / a;
    if (n % a != 0)
        bya = -1;
    int byb = n / b;
    if (n % b != 0)
        byb = -1;
    int byc = n / c;
    if (n % c != 0)
        byc = -1;

    int coeffa;
    int coeffb;
    int coeffc;

    int byab = -1;
    coeffa = 0;
    coeffb = n / b;
    if (n % b)
        coeffb++;
    while (coeffb > 0) {
        if (coeffb * b + coeffa * a < n) {
            coeffa++;
        }
        else if (coeffb * b + coeffa * a > n) {
            coeffb--;
        }
        else {
            byab = coeffa + coeffb;
            break;
        }
    }

    int byac = -1;
    coeffa = 0;
    coeffc = n / c;
    if (n % c)
        coeffc++;
    while (coeffc > 0) {
        if (coeffc * c + coeffa * a < n) {
            coeffa++;
        }
        else if (coeffc * c + coeffa * a > n) {
            coeffc--;
        }
        else {
            byac = coeffa + coeffc;
            break;
        }
    }

    int bybc = -1;
    coeffb = 0;
    coeffc = n / c;
    if (n % c)
        coeffc++;
    while (coeffc > 0) {
        if (coeffc * c + coeffb * b < n) {
            coeffb++;
        }
        else if (coeffc * c + coeffb * b > n) {
            coeffc--;
        }
        else {
            bybc = coeffb + coeffc;
            break;
        }
    }

    int byabc = -1;
    coeffa = 0;
    coeffb = 0;
    coeffc = n / c;
    if (n % c)
        coeffc++;
    while (1) {
        //cout << "test abc : " << coeffa * a + coeffb * b + coeffc * c << endl;
        //cout << "coeff12 : " << coeffa << " coeff10 : " << coeffb << " coeff7 : " << coeffc << endl;
        if (coeffa * a + coeffb * b + coeffc * c < n) {
            coeffb++;
        }
        else if (coeffa * a + coeffb * b + coeffc * c > n)
            coeffc--;
        else {
            byabc = coeffa + coeffb + coeffc;
            break;
        }
        if (coeffc == 0) {
            coeffa++;
            coeffc = n / c;
            coeffb = 0;
        }
        if (coeffa * a > n)
            break;
    }

    int res = -1;
    res = max(res, bya);
    res = max(res, byb);
    res = max(res, byc);

    res = max(res, byab);
    res = max(res, byac);
    res = max(res, bybc);

    res = max(res, byabc);

    cout << res << endl;
}
	
int main(){ 
    Solve();
    return 0;
}
