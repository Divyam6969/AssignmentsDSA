#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of elements in your array:"<<endl;
    int s;
    cin>>s;
    int arr[s];
    for (int i=0;i<s;i++)
    {
        cout<<"Enter the element at position "<<i<<endl;
        cin>>arr[i];
    }
    cout<<"The array you entered is"<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Missing elements in your sorted array are"<<endl;
    
    
    for(int i=1;i<=arr[s-1];i++)
    {
        int count=0;
        for(int j=0;j<s;j++)
        {
            if(i==arr[j])
            {
                count++;
            }
        }
        if(count==0)
        {
            cout<<i<<" ";
        }

        
    }

    return 0;
}