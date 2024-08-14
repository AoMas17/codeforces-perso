#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){
    int n; cin >> n;
	vector<vector<int>> tab;
	int dico[n];
	for(int i = 0; i < n; i++)
		dico[i] = 0;
	vector<int> res;
	for(int i = 0; i < n; i++){
		vector<int> v(n-1);
		for(int j = 0; j < n - 1; j++){
			cin >> v[j];
		}
		tab.push_back(v);
	}
	
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n; j++){
			int ind = tab[j][i] - 1;
			dico[ind]++;
			if (dico[ind] == n-1)
				res.push_back(ind + 1);
		}
	}
	int a = res[n - 1];
	int r = 0;
	if(tab[n-1][n-2] == a)
		r++;
	if(tab[n-2][n-2] == a)
		r++;
	if(tab[n-3][n-2] == a)
		r++;
	if(r < 2){
		int tmp = res[n-1];
		res[n-1] = res[n-2];
		res[n-2] = tmp;
	}
	for(int i = 0; i < n; i++){
		cout << res[i] << ' ';
	}
	cout << endl;
}
	
int main(){ 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
