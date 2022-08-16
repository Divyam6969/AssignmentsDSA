#include<iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter the number of rows in your matrix " << endl;
    cin >> r;
    cout << "Enter the number of columns in your matrix " << endl;
    cin >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter the element at " << i << " row and " << j << " column" << endl;
            cin >> arr[i][j];
        }
    }
    cout << "Your matrix is" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int newr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            newr[i][j]=arr[j][i];
        }
    }

    cout << "Transpose of the matrix is" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << newr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
