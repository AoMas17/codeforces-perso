#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    string pi = "31415926535897932384626433832795028841971";
	string n;
	cin >> n;
	int res = 0;
	while(res < n.size() && pi[res] == n[res])
		res++;
	cout << res << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
