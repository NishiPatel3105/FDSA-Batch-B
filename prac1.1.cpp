#include<iostream>
using namespace std;
int main(){
int n,i,h;
cout<<"Enter The Number Of Item:";
cin>>n;
string item[n];
cout<<"Enter The Items: ";
for(i=0;i<n;i++){
cin>>item[i];
}
cout<<"Enter Hours: ";
cin>>h;
h=h%n;
for(int j=0;j<h;j++){
        string temp=item[0];
        for(i=0;i<n-1;i++){
        item[i]=item[i+1];
        }
        item[n-1]=temp;
}
         cout<<"New Order: ";
         for(i=0;i<n;i++){
        cout<<" "<<item[i];
}

return 0;
}

