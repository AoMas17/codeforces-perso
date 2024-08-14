#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve() {
    unsigned long long n; cin >> n;
    vector<string> a(n);
    for (unsigned long long i = 0; i < n; i++)
        cin >> a[i];
    unsigned long long res = n;
    vector<unsigned long long> t1(10);
    vector<unsigned long long> t2(19);
    vector<unsigned long long> t3(28);
    vector<unsigned long long> t4(37);
    vector<unsigned long long> t5(46);

    for (string s : a) {
        unsigned long long l = s.size();
        unsigned long long sum = 0;
        for (char c : s)
            sum += c - '0';
        if (l == 1)
            t1[sum]++;
        else if (l == 2)
            t2[sum]++;
        else if (l == 3)
            t3[sum]++;
        else if (l == 4)
            t4[sum]++;
        else
            t5[sum]++;
    }

    for (string s : a) {
        unsigned long long l = s.size();
        unsigned long long sum;
        unsigned long long pres = res;
        if (l == 1) {
            sum = s[0] - '0';
            //cout << "(t1[sum] - 1) * 2 : " << max(0, (t1[sum] - 1) * 2) << endl;
            res += (t1[sum] - 1);
        }
        else if (l == 2) {
            sum = s[0] - '0' + s[1] - '0';
            res += t2[sum] - 1;
        }
        else if (l == 3) {
            sum = s[0] - '0' + s[1] - '0' - (s[2] - '0');
            if (sum >= 0 && sum <= 9)
                res += t1[sum];
            sum = s[1] - '0' + (s[2] - '0') - (s[0] - '0');
            if (sum >= 0 && sum <= 9)
                res += t1[sum];
            sum = s[0] - '0' + s[1] - '0' + s[2] - '0';
            res += (t3[sum] - 1);
        }
        else if (l == 4) {
            sum = (s[0] - '0') + (s[1] - '0') + (s[2] - '0') - (s[3] - '0');
            if (sum >= 0 && sum <= 18)
                res += t2[sum];
            sum = (s[1] - '0') + (s[2] - '0') + (s[3] - '0') - (s[0] - '0');
            if (sum >= 0 && sum <= 18)
                res += t2[sum];
            sum = s[0] - '0' + s[1] - '0' + s[2] - '0' + s[3] - '0';
            res += t4[sum] - 1;
        }
        else {
            sum = (s[2] - '0') + (s[3] - '0') + (s[4] - '0') - (s[0] - '0') - (s[1] - '0');
            if (sum >= 0 && sum <= 9)
                res += t1[sum];
            sum = (s[0] - '0') + (s[1] - '0') + (s[2] - '0') - (s[3] - '0') - (s[4] - '0');
            if (sum >= 0 && sum <= 9)
                res += t1[sum];

            sum = (s[0] - '0') + (s[1] - '0') + (s[2] - '0') + (s[3] - '0') - (s[4] - '0');
            if (sum >= 0 && sum <= 27)
                res += t3[sum];
            sum = (s[1] - '0') + (s[2] - '0') + (s[3] - '0') + (s[4] - '0') - (s[0] - '0');
            if (sum >= 0 && sum <= 27)
                res += t3[sum];
            sum = s[0] - '0' + s[1] - '0' + s[2] - '0' + s[3] - '0' + s[4] - '0';
            res += t5[sum] - 1;

        }
        //cout << "s : " << s << " nb match : " << res - pres << endl;
    }

    cout << res << endl;
}

int main() {
    Solve();
    return 0;
}
