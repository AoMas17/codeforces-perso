#include <iostream>
#include <string>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
	int res = 0;
	for(int i = 0; i < 10; i++){
		string s; cin >> s;
		for(int j = 0; j < 10; j++){
			if(s[j] == 'X'){
				int p = 1;
				if(i > 0 && j > 0 && i < 9 && j < 9){
					p = 2;
					if(i > 1 && j > 1 && i < 8 && j < 8){
						p = 3;
						if(i > 2 && j > 2 && i < 7 && j < 7){
							p = 4;
							if(i > 3 && j > 3 && i < 6 && j < 6){
								p = 5;
						
							}
						}
					}
				}
				res += p;
			}
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
