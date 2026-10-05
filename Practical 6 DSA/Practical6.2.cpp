#include<iostream>
using namespace std;
struct Node{
    string page;
    Node* next;
};
Node*top=NULL;
void visit(string page){
    Node*newPage=new Node;
    newPage->page=page;
    newPage->next=top;
    top=newPage;

    cout<<"Current Page:"<<top->page<<endl;
}
void back(){
    if(top==NULL){
        cout<<"No page"<<endl;
    }
    else if(top->next==NULL){
        cout<<"Already first page:"<<top->page<<endl;
    }
    else{
        Node*temp=top;
        top=top->next;
        delete temp;

        cout<<"Current Page:"<<top->page<<endl;
    }
}
int main(){
    visit("Home");
    visit("Google");
    visit("YouTube");
    back();
    back();
    back();
    return 0;
}
