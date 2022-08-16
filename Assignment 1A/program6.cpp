#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter a number: ";
    cin>>t;
    int arr[t*t];
    for(int i=0;i<(t*t);i++)
    {
        arr[i]=(i+1);
    }
    
    int r= (sizeof(arr)/sizeof(int))/3;
    int c= (sizeof(arr)/sizeof(int))/3;
    int matrix[r][c];

    int top=0;
    int bottom=r-1;
    int left=0;
    int right=c-1;
    int dir=0;
    int start=0;
    while((top<=bottom) && (left<=right))
    {
        if(dir==0)
        {
            for(int i=left;i<=right;i++)
            {
                matrix[top][i]=arr[start];
                start++;
            }
            top++;
            dir=1;
            
        }
        else if(dir==1)
        {
            for(int i=top;i<=bottom;i++)
            {
                matrix[i][right]=arr[start];
                start++;
            }
            right--;
            dir=2;
        }
        else if(dir==2)
        {
            for(int i=right;i>=left;i--)
            {
                matrix[bottom][i]=arr[start];
                start++;
            }
            bottom--;
            dir=3;
        }
        else if(dir==3)
        {
            for(int i=bottom;i>=top;i--)
            {
                matrix[i][left]=arr[start];
                start++;
            }
            dir=1;
            left++;
        }

    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}