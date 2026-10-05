#include<iostream>
using namespace std;
int n=5;
int stack[5];
int top=-1;
void push(int value){
if(top==n-1)
{
    cout<<"Stack is full"<<endl;
    return;
}
top++;
stack[top]=value;
cout<<value<<"pushed"<<endl;
}
void pop(){
if(top==-1)
{
    cout<<"Stack is empty"<<endl;
    return;
}
cout<<stack[top]<<"pop"<<endl;
top--;
}
void peek(){
if(top==-1){
    cout<<"stack is empty"<<endl;
    return;
}
cout<<"top element"<<stack[top]<<endl;
}
void display(){
if(top==-1){
    cout<<"stack is empty"<<endl;
    return;
}
cout<<"stack";
for(int i=top;i>=0;i--)
     {
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}
int main(){
push(10);
push(20);
display();
peek();
pop();
display();
return 0;
}
