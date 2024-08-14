#include <iostream>
#include <vector>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() { 
    init; int t; cin >> t; 
    if(t > 2 && t % 2 == 0)
	    cout << "YES" << endl;
    else
	    cout << "NO" << endl;
    return 0;
}

