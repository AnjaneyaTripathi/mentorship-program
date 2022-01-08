#include <iostream>
using namespace std;
void display(int **mat, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
void rotate(int **img, int **mat, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            img[i][j] = mat[c - 1 - j][i];
        }
    }
}
int main()
{
    int r1, c1;
    cout << "Enter the number of rows and columns: " << endl;
    cin >> r1 >> c1;
    int **mat = new int *[r1];
    for (int i = 0; i < r1; i++)
        mat[i] = new int[c1];
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
            cin >> mat[i][j];
    }
    cout << "The input matrix is follows:" << endl;
    display(mat, r1, c1);
    int **img = new int *[c1];
    for (int i = 0; i < c1; i++)
        img[i] = new int[r1];
    rotate(img, mat, c1, r1);
    cout << "The image matrix is:" << endl;
    display(img, c1, r1);
}