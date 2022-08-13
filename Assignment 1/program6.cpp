#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
  
        // Last i elements are already 
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);

}
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
    

    bubblesort(arr,s);
    cout<<endl;
    cout<<"The array after sorting is"<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}