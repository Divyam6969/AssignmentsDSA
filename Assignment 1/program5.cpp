#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of elements in your array:"<<endl;
    int s;
    cin>>s;
    int arr[s];
    //Please enter sorted array
    for (int i=0;i<s;i++)
    {
        cout<<"Enter the element at position "<<i<<endl;
        cin>>arr[i];
    }
    
    cout<<"Enter the element you want to search : ";
    int n;
    cin>>n;

    int a,z;
    int mid = (int) ((a+z)/2);
    while(a>=z)
    {
        a=0;
        z=s;
        mid = (int) ((a+z)/2);
        if(arr[mid]==n)
        {
            cout<<"your element is at position "<<mid;
            return 0;
        }
        if(arr[mid]<n)
        {
            a=mid+1;
        }
        if(arr[mid]>n)
        {
            z=mid-1;
        }
        

    }

    

    return 0;
}