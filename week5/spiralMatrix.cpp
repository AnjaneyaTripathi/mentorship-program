#include <iostream>
using namespace std;
void input(int **a, int r, int c)
{
    cout << "Enter the elements of matrix: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
}
void spiralMatrix(int **a, int r, int c)
{
    int direction = 0;
    int top = 0, bottom = r - 1, left = 0, right = c - 1;
    while (top <= bottom && left <= right)
    {
        if (direction == 0)
        {
            for (int i = left; i <= right; i++)
                cout << a[top][i] << " ";
            top++;
        }
        else if (direction == 1)
        {
            for (int i = top; i <= bottom; i++)
                cout << a[i][right] << " ";
            right--;
        }
        else if (direction == 2)
        {
            for (int i = right; i >= left; i--)
                cout << a[bottom][i] << " ";
            bottom--;
        }
        else if (direction == 3)
        {
            for (int i = bottom; i >= top; i--)
                cout << a[i][left] << " ";
            left++;
        }
        direction = (direction + 1) % 4;
    }
}
int main()
{
    int r, c;
    cout << "Enter the rows and columns of matrix: ";
    cin >> r >> c;
    int **a = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
    {
        a[i] = (int *)malloc(c * sizeof(int));
    }
    input(a, r, c);
    spiralMatrix(a, r, c);
}