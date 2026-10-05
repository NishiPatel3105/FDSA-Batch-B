#include<iostream>
#include<stack>
using namespace std;
int p(char c)
{
    if(c=='*'||c=='/')
        return 2;

    if(c=='+'||c=='-')
        return 1;
    return 0;
}
int main()
{
    string n;
    cout<<"Enter expression:";
    cin>>n;

    stack<char>s;
    string a="";

    for(char c:n)
    {
        if(isalnum(c))
        {
            a=a+c;
        }
        else if(c=='(')
        {
            s.push(c);
        }
        else if(c==')')
        {
            while(s.top()!='(')
            {
                a=a+s.top();
                s.pop();
            }

            s.pop();
        }
        else
        {
            while(!s.empty() && p(s.top()) >= p(c))
            {
                a=a+s.top();
                s.pop();
            }

            s.push(c);
        }
    }
    while(!s.empty())
    {
        a=a+s.top();
        s.pop();
    }

    cout<<"Postfix:"<<a;

    return 0;
}
