#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node*next;
};

Node*front=NULL;
Node*rear=NULL;

void arrive(int x)
{
    Node*newNode=new Node();
    newNode->data=x;
    newNode->next=NULL;

    if(rear==NULL)
    {
        front=rear=newNode;
    }
    else
    {
        rear->next=newNode;
        rear=newNode;
    }
}
void attend()
{
    if(front==NULL)
    {
        cout<<"queue is empty"<<endl;
        return;
    }

    Node*temp=front;
    front=front->next;

    if(front==NULL)
        rear=NULL;

    delete temp;
}
void printQueue()
{
    Node*temp=front;

    if(temp==NULL)
    {
        cout<<"queue is empty"<<endl;
        return;
    }

    cout<<"queue:";

    while(temp!=NULL)
    {
        cout<<temp->data<< " ";
        temp=temp->next;
    }

    cout<<endl;
}
int main()
{
    arrive(1);
    printQueue();

    arrive(2);
    printQueue();

    arrive(3);
    printQueue();

    attend();
    printQueue();

    attend();
    printQueue();

    attend();
    printQueue();
    attend();
    return 0;
}
