#include <iostream>
using namespace std;
class Node
{
public:
    string song;
    Node*prev;
    Node*next;
    Node(string s)
    {
        song=s;
        prev=NULL;
        next=NULL;
    }
};
class Playlist
{
    Node*head;
public:
    Playlist()
    {
        head=NULL;
    }
    void addBeginning(string song)
    {
        Node*newNode=new Node(song);

        if(head==NULL)
        {
            head=newNode;
        }
        else
        {
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
        display();
    }
    void addEnd(string song)
    {
        Node*newNode=new Node(song);
        if(head==NULL)
        {
            head=newNode;
        }
        else
        {
            Node*temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newNode;
            newNode->prev=temp;
        }
        display();
    }
    void insertAfter(string oldSong, string newSong)
    {
        Node*temp=head;
        while(temp!=NULL && temp->song!=oldSong)
        {
            temp=temp->next;
        }

        if (temp==NULL)
        {
            cout<<"Song not found"<<endl;
            return;
        }
        Node*newNode=new Node(newSong);

        newNode->next=temp->next;
        newNode->prev=temp;

        if(temp->next!=NULL)
        {
            temp->next->prev=newNode;
        }
        temp->next=newNode;
        display();
    }
    void removeFirst()
    {
        if(head==NULL)
        {
            cout<<"Playlist is empty"<<endl;
            return;
        }
        Node*temp=head;
        head=head->next;
        if(head!=NULL)
        {
            head->prev=NULL;
        }
        delete temp;
        display();
    }
    void countSongs()
    {
        int count=0;
        Node*temp=head;

        while (temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        cout<<"Number of songs="<<count<<endl;
    }
    void display()
    {
        Node*temp=head;

        cout<<"Playlist: ";

        if(temp==NULL)
        {
            cout<<"Empty";
        }
        while(temp!=NULL)
        {
            cout<<temp->song<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    Playlist p;
    p.addEnd("SongA");
    p.addEnd("SongB");
    p.addBeginning("SongC");
    p.insertAfter("SongA", "SongD");
    p.removeFirst();
    p.countSongs();
    return 0;
}
