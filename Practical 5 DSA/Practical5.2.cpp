#include<iostream>
using namespace std;
struct node{
string name;
node *next;
};
void add(node *&head,string name)
{
    node *n=new node{name,NULL};
    if(head==NULL)
    {
        head=n;
        n->next=head;
        return;
    }
    node *t=head;
    while(t->next!=head)
        t=t->next;
        t->next=n;
        n->next=head;
}
void delet(node *&head,string name)
{
    if(head==NULL)
        return;
    node *t=head;
    if(head->name==name)
    {
        while(t->next!=head)
        t=t->next;
    if(head->next==head)
    {

        delete head;
        head=NULL;
        return;
    }
    t->next=head->next;
    node *d=head;
    head=head->next;
    delete d;
    return;
}
while(t->next!=head&& t->next->name!=name)
t=t->next;
if(t->next!=head)
{
    node *d=t->next;
    t->next=d->next;
    delete d;
}
}
void display(node *head)
{

    if(head==NULL)
        return;
    node *t=head;
    do{
        cout<<t->name<<" ";
        t=t->next;
    }
    while(t!=head);
    cout<<endl;
}
struct dnode{
string name;
dnode *prev;
dnode *next;
};
void addD(dnode *&head,string name)
{

    dnode *n=new dnode{name,NULL,NULL};
    if(head==NULL){
        head=n;
        n->next=n;
        n->prev=n;
        return;
    }
    dnode *last=head->prev;
    n->next=head;
    n->prev=last;
    last->next=n;
    head->prev=n;
}
void deleteD(dnode *&head,string name)
{

    if(head==NULL)
        return;
    dnode*t=head;
    do{
        if(t->name==name){
            delete t;
            head=NULL;
            return;
        }
        t->prev->next=t->next;
        t->next->prev=t->prev;
        if(t==head){
            head=t->next;
        delete t;
        return;
    }
    t=t->next;
    }
while(t!=head);
}
void displayD(dnode *head)
{

    if(head==NULL)
        return;
    dnode *t=head;
    do{
        cout<<t->name<<" ";
        t=t->next;
    }
    while(t!=head);
    cout<<endl;
}
int main(){
node *head=NULL;
add(head,"A");
add(head,"B");
add(head,"C");
cout<<"Singly: ";
display(head);
delet(head,"B");
cout<<"After Leave: ";
display(head);
dnode *dhead=NULL;
addD(dhead,"A");
addD(dhead,"B");
addD(dhead,"C");
cout<<"Doubly: ";
displayD(dhead);
deleteD(dhead,"B");
cout<<"After Leave: ";
displayD(dhead);
return 0;
}
