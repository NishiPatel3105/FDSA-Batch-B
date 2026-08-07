#include<iostream>
using namespace std;
int recursiveSearch(string license[],int n,string j,int index)
{
    if(index == n)
        return -1;
if(license[index] == j)
    return index;
return recursiveSearch(license, n, j, index + 1);
}
int main(){
int n,i;
cout<<"Enter The Numbers Of cars: ";
cin>>n;
string license[n],j;
cout<<"Enter the Number plate: ";
for(i=0;i<n;i++){
cin>>license[i];
}
cout<<"Numberplate You Want to search: ";
cin>>j;
int pos=-1;
for(i=0;i<n;i++){
    if(license[i]==j){
            pos=i;
        }
}
if(pos!=-1){
    cout<<"Target Plate Found At Position "<<pos+1<<endl;
return 0;
}
else{
cout<<"Car Not Found!";
}
return 0;
}
