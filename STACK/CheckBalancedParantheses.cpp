#include<bits/stdc++.h>
using namespace std;
bool balance(string expr)
{
    stack<char> s;
    char x;
    for(int i=0;i<expr.length();i++)
    {
        if(expr[i] == '{' || expr[i] == '[' || expr[i] == '(')
            {
                s.push(expr[i]);
                continue;
            }
        if(s.empty())
            return false;
        switch(expr[i])
        {
        case ')':
            x=s.top();
            s.pop();
            if(x == '{' || x == '[')
                return false;
            break;
        case '}':
            x = s.top();
            s.pop();
            if(x == '[' || x == '(')
                return false;
                break;
        case ']':
            x = s.top();
            s.pop();
            if(x == '{' || x== '(')
                return false;
                break;
        }

    }
    return (s.empty());
}
int main()
{
    string s;
    for(int i=0;i<4;i++)
    {
        cin>>s;
        if(balance(s))
            cout<<"Balanced"<<"\n";
        else
            cout<<"Not balanced"<<"\n";
    }
}
