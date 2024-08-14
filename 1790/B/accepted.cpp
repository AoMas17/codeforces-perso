#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n, s, r;
	cin >> n >> s >> r;
	vector<int> dices;
	dices.push_back(s-r);
	n -= 1;
	s -= (s - r);
	while(n--){
		dices.push_back(1);
		s--;
	}
	int ind = 1;
	while(s--){
		if(ind == dices.size())
			ind = 1;
		dices[ind]++;
		ind++;
	}
	for(int i = 0; i < dices.size(); i++)
		cout << dices[i] << " ";;
	cout << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
