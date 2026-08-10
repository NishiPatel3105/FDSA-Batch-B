#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number of students:";
cin>>n;
int arr1[n],arr2[n],arr3[n];
cout<<"Enter Marks:"<<endl;

for(int i=0;i<n;i++)
{
    cin>>arr1[i];

    arr2[i]=arr1[i];
    arr3[i]=arr1[i];
}
//Bubble sort
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-i-1;j++)
    {
        if(arr1[j]>arr1[j+1])
        {
            int temp=arr1[j];
            arr1[j]=arr1[j+1];
            arr1[j+1]=temp;
        }
    }
    cout<<"pass"<<i+1<<" : ";
    for(int k=0;k<n;k++)
    {
        cout<<arr1[k]<<" ";
    }
    cout<<endl;
}

    //selection sort
        for(int i=0;i<n-1;i++)
        {
            int minimum=i;
            for(int j=i+1;j<n;j++)
            {
                if(arr2[j]<arr2[minimum])
                {
                    minimum=j;
                }
            }
            int temp=arr2[i];
            arr2[i]=arr2[minimum];
            arr2[minimum]=temp;
        }
        cout<<"Selection Sorted Marks:";
        for(int i=0;i<n;i++)

        {
            cout<<arr2[i]<<" ";
        }

    //Insertion Sort
    for(int i=1;i<n;i++)
    {
        int current=arr3[i];
        int j=i-1;

        while(j>=0 && arr3[j]>current)
        {
            arr3[j+1]=arr3[j];
            j--;
        }
            //Insert the current at its correct position
            arr3[j+1]=current;
        }
        cout<<"\nInsertion sorted marks:";
        for(int i=0;i<n;i++)
    {
        cout<<arr3[i]<<" ";
    }
return 0;
}

