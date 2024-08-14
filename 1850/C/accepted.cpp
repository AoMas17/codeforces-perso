#include <iostream>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	int n = 8;
	string res = "";
	while(n--){
		string s; cin >> s;
		for(int i = 0; i < 8; i++){
			if(s[i] != '.')
				res += s[i];
		}
	}
	cout << res << endl;
}


int main() {
    init; int t; cin >> t;
    while(t--)
        Solve();
    return 0;
}
