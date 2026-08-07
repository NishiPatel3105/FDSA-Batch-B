#include<iostream>
using namespace std;
int search(int a[],int n,int x)
{
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if(x<a[mid])
        {
            high=mid+1;
        }
        else
        {
            low=mid+1;
        }
    }
    return 0;
    }
    int search2(int a[],int low,int high,int x)
    {
        if(low>high)
            return 0;
        int mid=(low+high)/2;
        if(a[mid]==x)
            return search2(a,low,mid-1,x);
        return search2(a,mid+1,high,x);
    }
    int  main(){
    int n;
    cout<<"Enter number of books:";
    cin>>n;
    int a[n];
    cout<<"Enter book codes in sorted order:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"Enter code to search:";
    cin>>x;
    int ans=search(a,n,x);
    if(ans!=0)
        cout<<"Position:"<<ans+1<<endl;
    else
        cout<<"Book not found"<<endl;
    int ans2=search2(a,0,n-1,x);
    if(ans2!=0)
        cout<<"Position:"<<ans2+1<<endl;
    else
        cout<<"Book not found"<<endl;
    return 0;
    }

