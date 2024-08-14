#include <iostream>
#include <vector>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int a, b, c;
	cin >> a; cin >> b; cin >> c;
	int res = 0;
	int tmp;
	if(a < b){
		tmp = b; 
		b = a; 
		a = tmp;
	}
	while(abs(a-b) > 2*c){
		a -= c; 
		b += c; 
		res++;
	}
	if(a != b)
		res++;
	if(a < b)
		res--;
	cout << res << endl;
}

int main() { 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
