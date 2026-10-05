#include<iostream>
#include<stack>
using namespace std;

int priority(char op){
    if(op == '+' || op == '-')
        return 1;

    if(op == '*' || op == '/')
        return 2;

    return 0;
}

int main(){
    string infix, postfix = "";
    stack<char> s;

    cout<<"Enter infix expression: ";
    cin>>infix;

    for(char ch : infix){
        // If it is a letter or number
        if(isalnum(ch)) {
            postfix += ch;
        }
        // If opening bracket
        else if (ch == '('){
            s.push(ch);
        }
        // If closing bracket
        else if(ch == ')'){

            while(!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            if (!s.empty()){
            s.pop();   // Remove '('
            }
        }

        // If it is an operator
        else{
            while(!s.empty() &&
                   priority(s.top())>= priority(ch)){
                postfix += s.top();
                s.pop();
            }

            s.push(ch);
        }
    }
    // Remove remaining operators
    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }

    cout<<"Postfix expression:"<<postfix<<endl;

    return 0;
}
