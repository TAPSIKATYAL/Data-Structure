#include<bits/stdc++.h>
#include<stack>
#include<iostream>
#include<string>
using namespace std;
int  Postfix(string expr)
{
stack<int> s;
int a,b;
for(int i=0;i<expr.length();i++)
    {
        if(expr[i] == ' ')
        {
            continue;
        }
        if(isdigit(expr[i]))
        {
            s.push(expr[i]-48);
            continue;
        }
        a=s.top();
        s.pop();
        b=s.top();
        s.pop();
       switch(expr[i])
       {
           case '*':
               s.push(a*b);
               break;
           case '-':
                s.push(b-a);
               break;
            case '+':
               s.push(a+b);
               break;
            case '/':
               s.push(a/b);
               break;
       }
    }
return(s.top());
}
int main()
{
    string expression;
	cout<<"Enter Postfix Expression \n";
	getline(cin,expression);
	int result = Postfix(expression);
	cout<<"Output = "<<result<<"\n";
}
