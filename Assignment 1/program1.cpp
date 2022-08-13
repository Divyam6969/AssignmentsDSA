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


    cout<<"Choose from the menu"<<endl;
    cout<<"1.Insert"<<endl<<"2.Delete"<<endl<<"3.Search"<<endl<<"4.Display"<<endl<<"5.Exit"<<endl;
    int x;
    cin>>x;
    if(x==1)
    {
        cout<<"Enter the position where you want to enter your element:"<<endl;
        int p;
        cin>>p;
        int arrr[s+1];
        cout<<"Enter the element you want to insert:"<<endl;
        int ele;
        cin>>ele;
        for(int i=0;i<p;i++)
        {
            arrr[i]=arr[i];
        }
        arrr[p]=ele;
        for(int i=p+1;i<(s+1);i++)
        {
            arrr[i]=arr[i-1];
        }
        cout<<"Your array after insertion is"<<endl;
        for (int i=0;i<s+1;i++)
            {
                cout<<arrr[i]<<" ";
            }


    }
    else if(x==2)
    {
        cout<<"Enter the position from where you want to delete your element:"<<endl;
        int p;
        cin>>p;
        for(int i=p;i<s;i++)
        {
            arr[i]=arr[i+1];
        }
        cout<<"Your array after deletion is"<<endl;
        for (int i=0;i<s-1;i++)
            {
                cout<<arr[i]<<" ";
            }

    }
    else if(x==3)
    {
        cout<<"Enter the element you want to search"<<endl;
        int lol;
        cin>>lol;
        for(int i=0;i<s;i++)
        {
            if(arr[i]==lol)
            {
                cout<<"Your element is at position "<<i<<" in the array"<<endl;
            }
        }
    }
    else if(x==4)
    {
        cout<<"Your array is"<<endl;
        for (int i=0;i<s;i++)
            {
                cout<<arr[i]<<" ";
            }

    }
    else if(x==5)
    {
        cout<<"Thanks for using the program";
    }

    return 0;
}