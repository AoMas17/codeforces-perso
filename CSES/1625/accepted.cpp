#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FORi(a) for (int i = 0; i < a; i++)
#define FORj(a) for (int j = 0; j < a; j++)
#define FORk(a) for (int k = 0; k < a; k++)
#define ull unsigned long long
#define ll long long

string possibilities = "DULR";
ll solutions = 0;
bool visited[9][9] = {false};
int dr[4] = {1, -1, 0, 0};  // D, U, L, R
int dc[4] = {0, 0, -1, 1};
int p[48];

void explore(int ind, int r, int c)
{
    if ((visited[r][c - 1] && visited[r][c + 1]) &&
	    (!visited[r - 1][c] && !visited[r + 1][c]))
		return;
	if ((visited[r - 1][c] && visited[r + 1][c]) &&
	    (!visited[r][c - 1] && !visited[r][c + 1]))
		return;

	if (r == 7 && c == 1) {
		if (ind == 48) solutions++;
		return;
	}

    if (ind == 48) return;

    visited[r][c] = true;
    if (p[ind] < 4)
    {
        int nr = r + dr[p[ind]];
		int nc = c + dc[p[ind]];
		if (!visited[nr][nc]) explore(ind + 1, nr, nc);
    }

    else
    {
        for (int i = 0; i < 4; i++) {
			int nr = r + dr[i];
			int nc = c + dc[i];
			if (visited[nr][nc]) continue;
			explore(ind + 1, nr, nc);
		}
    }
    visited[r][c] = false;
}

void Solve(){
    string s; cin >> s;

    for (int i = 0; i < 48; i++) {
		char cur = s[i];

		if (cur == 'D') p[i] = 0;
		else if (cur == 'U') p[i] = 1;
		else if (cur == 'L') p[i] = 2;
		else if (cur == 'R') p[i] = 3;
		else p[i] = 4;  // cur == '?'
	}
    
    for (int i = 0; i < 9; i++) {
		visited[0][i] = true;
		visited[8][i] = true;
		visited[i][0] = true;
		visited[i][8] = true;
	}

    visited[1][1] = true;
    explore(0, 1, 1);
    cout << solutions << endl;
}
	
int main(){ 
    init; 
    Solve();
    return 0;
}
