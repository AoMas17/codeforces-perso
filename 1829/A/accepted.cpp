#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	string s; cin >> s;
	string expected = "codeforces";
	int res = 0;
	for(int i = 0; i < 10; i++){
		if(s[i] != expected[i])
			res++;
	}
	cout << res << endl;
}

int main() { 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}

