//To remove duplicacy of the elements
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
    cout<<"Your array is"<<endl;
    for (int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int count=0;
    for(int i=0;i<s-count;i++)
    {
        for(int j=i+1;j<s-count;j++)
        {
            if (arr[i]==arr[j])
            {
                for(int i=j;i<s-count;i++)
                {
                    arr[i]=arr[i+1];
                }
                count++;
            }
        }
    }

    cout<<"Your array after removing duplicacy now is"<<endl;
    for (int i=0;i<s-count;i++)
        {
            cout<<arr[i]<<" ";
        }
    return 0;
}