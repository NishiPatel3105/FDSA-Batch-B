#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number of colours";
cin>>n;

int arr[n];
cout<<"Enter colour code:";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int low=0,mid=0,high=n-1;
//one pass sorting
while(mid<=high)
{
    if(arr[mid]==0)
    {
        int temp=arr[low];
        arr[low]=arr[mid];
        arr[mid]=temp;

        low++;
        mid++;
    }
    else if(arr[mid]==1)
    {
        mid++;
    }
    else
    {
        int temp=arr[mid];
        arr[mid]=arr[high];
        arr[high]=temp;
        high--;
    }

}
cout<<"Sorted colours:";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}
