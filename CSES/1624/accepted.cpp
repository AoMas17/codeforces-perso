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

char board[8][8];
int solutions = 0;

bool isSafe(int row, int col, vector<int>& queens) {
    if (board[row][col] == '*') return false;
    
    for (int prevRow = 0; prevRow < row; prevRow++) {
        int prevCol = queens[prevRow];
        
        if (prevCol == col || abs(prevRow - row) == abs(prevCol - col)) 
            return false;
    }
    return true;
}

void placeQueens(int row, vector<int>& queens) {
    if (row == 8) {
        solutions++;
        return;
    }
    
    for (int col = 0; col < 8; col++) {
        if (isSafe(row, col, queens)) {
            queens[row] = col;
            placeQueens(row + 1, queens);
        }
    }
}

void Solve() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> board[i][j];
        }
    }
    
    vector<int> queens(8, -1);
    placeQueens(0, queens);
    
    cout << solutions << endl;
}
    
int main(){ 
    init; 
    Solve();
    return 0;
}