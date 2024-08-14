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

vector<string> v = { "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H" };

int index(string chord) {
    FORi(v.size()) {
        if (v[i] == chord)
            return i;
    }
    return -1;
}

int diff(int a, int b) {
    int res = b - a;
    while (res < 0)
        res += 12;
    return res;
}

void Solve() {
    vector<string> chords(3);
    FORi(3) {
        cin >> chords[i];
    }
    sort(chords.begin(), chords.end(), [](string a, string b) {return index(a) < index(b); });
    int ind1 = index(chords[0]);
    int ind2 = index(chords[1]);
    int ind3 = index(chords[2]);
    if ((diff(ind1, ind2) == 4 && diff(ind2, ind3) == 3) || (diff(ind2, ind3) == 4 && diff(ind3, ind1) == 3) || (diff(ind3, ind1) == 4 && diff(ind1, ind2) == 3)) {
        cout << "major" << endl;
    }
    else if ((diff(ind1, ind2) == 3 && diff(ind2, ind3) == 4) || (diff(ind2, ind3) == 3 && diff(ind3, ind1) == 4) || (diff(ind3, ind1) == 3 && diff(ind1, ind2) == 4)) {
        cout << "minor" << endl;
    }
    else {
        cout << "strange" << endl;
    }
}

	
int main(){ 
    init; 
    Solve();
    return 0;
}
