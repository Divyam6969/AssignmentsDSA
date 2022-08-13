#include<iostream>
using namespace std;
int main()
{
    int r1,c1;
    cout<<"Enter the number of rows in your matrix 1"<<endl;
    cin>>r1;
    cout<<"Enter the number of columns in your matrix 1"<<endl;
    cin>>c1;
    int arr1[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"Enter the element at "<<i<<" row and "<<j<<" column"<<endl;
            cin>>arr1[i][j];
        }
    }
    cout<<"Your first matrix is"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int r2,c2;
    cout<<"Enter the number of rows in your matrix 2"<<endl;
    cin>>r2;
    cout<<"Enter the number of columns in your matrix 2"<<endl;
    cin>>c2;
    int arr2[r2][c2];
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"Enter the element at "<<i<<" row and "<<j<<" column"<<endl;
            cin>>arr2[i][j];
        }
    }
    cout<<"Your second matrix is"<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    if((r1==r2)&&(c1==c2))
    {
        int sum[r1][c1];
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                sum[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
        
        cout<<"\nYour matrix after addition is<"<<endl;

        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cout<<sum[i][j]<<" ";
            }
            cout<<endl;
        }

    }
   else
   {
    cout<<"Matrix cannot be added";
   }

    return 0;
}