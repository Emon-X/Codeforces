#include <iostream>
#include <vector>
using namespace std;

void printgrid(vector<int> &grid, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i] == j)
                cout << "Q ";
            else
                cout << ". ";
        }
        cout << "\n";
    }
    cout << "\n";
}

bool isvalid(vector<int> &grid, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (grid[i] == col ||                  
            abs(grid[i] - col) == abs(i - row))
            return false;
    }
    return true;
}

void solve(vector<int> &grid, int row, int n, int &count)
{
    if (row == n)
    {
        count++;
        printgrid(grid, n);
        return;
    }

    for (int col = 0; col < n; col++)
    {
        if (isvalid(grid, row, col))
        {
            grid[row] = col;
            solve(grid, row + 1, n, count);
        }
    }
}

int main()
{

    int n;
    vector<int> grid(n);
    int cnt = 0;

    solve(grid, 0, n, cnt);

    cout << cnt << endl;

    return 0;
}
