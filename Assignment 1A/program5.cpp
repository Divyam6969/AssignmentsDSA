//Spiral traversal


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
    cout<<endl;
    
    int top=0;
    int bottom=r-1;
    int left=0;
    int right=c-1;
    int dir=0;
    while((top<=bottom) && (left<=right))
    {
        if(dir==0)
        {
            for(int i=left;i<=right;i++)
            {
                cout<<arr[top][i]<<" ";
            }
            top++;
            dir=1;
        }
        else if(dir==1)
        {
            for(int i=top;i<=bottom;i++)
            {
                cout<<arr[i][right]<<" ";
            }
            right--;
            dir=2;
        }
        else if(dir==2)
        {
            for(int i=right;i>=left;i--)
            {
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
            dir=3;
        }
        else if(dir==3)
        {
            for(int i=bottom;i>=top;i--)
            {
                cout<<arr[i][left]<<" ";
            }
            dir=1;
            left++;
        }
    }



    return 0;
}