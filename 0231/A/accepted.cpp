#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){ 
    int n; cin >> n;
	int r = 0;
	while(n--){
		int a, b, c;
		cin >> a >> b >> c;
		if(a + b + c > 1)
			r++;
	}
	cout << r << endl;
    return 0;
}
