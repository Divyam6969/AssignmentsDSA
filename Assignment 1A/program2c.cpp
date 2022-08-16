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

    if(c1!=r2)
    {
        cout<<"Cannot multiply these matrix"<<endl;
        return 0;
    }
    else
    {
        int newr[r1][c2];
        for(int i=0;i<c1;i++)
        {
            
            for(int j=0;j<r2;j++)
            {
                newr[i][j]=0;
                for(int k=0;k<r2;k++)
                {
                    newr[i][j]=newr[i][j]+arr1[i][k]*arr2[k][j];
                }
            }
            
        }
        cout<<"After multiplication your matrix is"<<endl;
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cout<<newr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    

    return 0;
}