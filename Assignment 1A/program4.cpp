//i guess my code will only work if we've to find only one saddle point lol

//it won't work in repeatition cases ;(
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
    int min[r];
    for(int i=0;i<r;i++)
    {
        
        min[i] = arr[i][0];
   
        for(int j=0;j<c;j++)
        {
            if(min[i]>=arr[i][j])
            {
                min[i]=arr[i][j];
               
            }
        }
    
    }
    
    int max[c];
    for(int i=0;i<c;i++)
    {
       
        max[i] = arr[0][i];
       
        for(int j=0;j<r;j++)
        {
            if(max[i]<=arr[j][i])
            {
                max[i]=arr[j][i];
                
            }
        }
        
    }
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(min[j]==max[i])
            {
                cout<<min[j]<<" is a saddle point";
            }
        }
    }

    return 0;
}