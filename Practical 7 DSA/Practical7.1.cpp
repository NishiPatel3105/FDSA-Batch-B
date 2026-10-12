#include <iostream>
using namespace std;

int main()
{
    int n,q[100],front = -1,rear = -1;
    int ch,x;

    cout<<"Enter queue size(max 100):";
    cin>>n;

    if(n<=0||n>100)
    {
        cout<<"Invalid queue size";
        return 0;
    }
    while (1)
    {
        cout<<"\n\n1. Join";
        cout<<"\n2. Serve";
        cout<<"\n3. Display Queue";
        cout<<"\n4. Exit";
        cout<<"\nEnter choice: ";
        cin>>ch;

        if(ch==1)
        {
            if((rear+1)%n==front)
            {
                cout<<"Queue is Full";
            }
            else
            {
                cout<<"Enter token: ";
                cin>>x;

                if(front==-1)
                    front=rear=0;
                else
                    rear=(rear+1)%n;

                q[rear]=x;
                cout<<"Token added successfully";
            }
        }
        else if(ch==2)
        {
            if(front==-1)
            {
                cout<<"Queue is Empty";
            }
            else
            {
                cout<<"Served token:"<<q[front];

                if(front==rear)
                    front=rear=-1;
                else
                    front=(front+1)%n;
            }
        }
        else if(ch==3)
        {
            if(front == -1)
            {
                cout<<"Queue is Empty";
            }
            else
            {
                cout<<"Queue values: ";

                int i=front;

                while(1)
                {
                    cout<<q[i]<<" ";

                    if(i==rear)
                        break;

                    i=(i+1)%n;
                }
            }
        }
        else if(ch==4)
        {
            cout<<"Program Exited";
            break;
        }
        else
        {
            cout<<"Invalid choice";
        }
    }

    return 0;
}

