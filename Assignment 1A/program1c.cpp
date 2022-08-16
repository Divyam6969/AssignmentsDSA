//Lower triangular matrix

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
            if(i>=j)
            {
            cout << "Enter the element at " << i << " row and " << j << " column" << endl;
            cin >> arr[i][j];
            }
            else
            {
                arr[i][j]=0;
            }
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
    return 0;
}