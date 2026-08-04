#include<iostream>
using namespace std;
int main(){
    int n,i,j,count;
cout<<"Enter Number of Books Borrowed: ";
cin>>n;
   int book[n];
cout<<"Enter the book id: ";
for(i=0;i<n;i++){
    cin>>book[i];
}
cout<<"Books Borrowd More Than Once:";
for(i=0;i<n;i++){
        bool duplicate = false;
for(int k=0;k<i;k++){
    if(book[i]==book[k]){
        duplicate=true;
        break;
    }
}
if(duplicate)
    continue;
count=0;
for(j=0;j<n;j++){
    if(book[j]==book[i]){
     count++;
    }
}
if(count>1){

    cout<<book[i]<<" ";
}
}
return 0;
}

