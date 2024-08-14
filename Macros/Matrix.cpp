#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
#define init ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

class Matrix {
public:
	Matrix(int r, int c, vector<vector<int>> t) {
		row = r;
		col = c; 
		tab = t;
	}

	void operator+=(Matrix m) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				tab[i][j] += m.tab[i][j];
			}
		}
	}

	void print() {
		for (auto line : tab) {
			for (auto el : line) {
				cout << el << " ";
			}
			cout << endl;
		}
	}

private:
	int row;
	int col;
	vector<vector<int>> tab;
};

int main() {
	vector<int> v(10);
	for (int i = 0; i < 10; i++)
		v[i] = i;
	vector<vector<int>> t(10);
	for (int i = 0; i < 10; i++)
		t[i] = v;
	Matrix m = Matrix(10, 10, t);
	m.print();
	return 0;
}