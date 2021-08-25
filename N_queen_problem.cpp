#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cout.precision(30);
#define N 4
void printBoard(int board[N][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            printf("| %d ",board[i][j]);
        printf("|\n");
    }
}
bool isSafe(int board[N][N], int row, int col) 
{ 
	for (int i=0; i<col; i++) 
		if (board[row][i]) 
			return false; 
    for (int i=row,j=col; i>=0 && j>=0; i--,j--) 
		if (board[i][j]) 
			return false; 
	for (int i=row,j=col; j>=0 && i<N; i++,j--) 
		if (board[i][j]) 
			return false; 
	return true; 
} 
bool solve(int board[N][N],int col)
{
    if(col>=N) return true; // all queens are placed
    for(int i=0;i<N;i++)
    {
        if(isSafe(board,i,col))
        {
            board[i][col]=1; // try placing queens
            // try next column with this config
            if(solve(board,col+1))
                return true;
            // backtrack
            board[i][col]=0;
        }
    }
    return false; // queen cannot be placed in any row
}
int main()
{
    int board[N][N]={{0,0,0,0},
                     {0,0,0,0},
                     {0,0,0,0},
                     {0,0,0,0}};
    if(solve(board,0)==false){
        cout<<"solution does not exist\n";
        return 0;
    }
    printBoard(board);
    return 0;
}
