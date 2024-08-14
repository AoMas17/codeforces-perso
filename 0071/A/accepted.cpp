#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    string s; cin >> s;
	int l = s.size();
	if(l > 10)
		cout << s[0] << l - 2 << s[l-1] << endl;
	else
		cout << s << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
