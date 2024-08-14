#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void Solve(){//container.find(element) != container.end();
	int l; int c;
	cin >> l >> c;
	set<int> setv;
	set<int> seti;
	set<int> setk;
	set<int> seta;
	for(int i = 0; i < l; i++){
		string s;
		cin >> s;
		for(int j = 0; j < c; j++){
			if(s[j] == 'v')
				setv.insert(j);
			else if(s[j] == 'i')
				seti.insert(j);
			else if(s[j] == 'k')
				setk.insert(j);
			else if(s[j] == 'a')
				seta.insert(j);
		}
	}
	int res = 0;
	while(setv.find(res) == setv.end() && res < c)
		res++;
	res++;
	while(seti.find(res) == seti.end() && res < c)
		res++;
	res++;
	while(setk.find(res) == setk.end() && res < c)
		res++;
	res++;
	while(seta.find(res) == seta.end() && res < c)
		res++;
	if(res < c)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main() { 
    init; int t; cin >> t; 
    while(t--)
        Solve();
    return 0;
}
