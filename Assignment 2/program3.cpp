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

    //Sum of rows
    for(int i=0;i<r;i++)
    {
        int rsum=0;
        for(int j=0;j<c;j++)
        {
            rsum=rsum+arr[i][j];
        }
        cout<<"Sum of the row "<<i+1<<" is :"<<rsum<<endl;
    }

    //Sum of columns
    for(int i=0;i<c;i++)
    {
        int csum=0;
        for(int j=0;j<r;j++)
        {
            csum=csum+arr[j][i];
        }
        cout<<"Sum of the column "<<i+1<<" is :"<<csum<<endl;
    }
    return 0;
}