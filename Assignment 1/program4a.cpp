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
    cout<<"Array after reversal is"<<endl;
    for (int i=s-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}