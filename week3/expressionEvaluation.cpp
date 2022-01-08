#include <iostream>
#include <string>
#include <stack>
using namespace std;
int precedence(char t)
{
    if (t == '^')
        return 3;
    else if (t == '/' || t == '*')
        return 2;
    else if (t == '+' || t == '-')
        return 1;
}
int calculate(string exp)
{
    stack<int> scientific;
    stack<char> op;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(')
        {
            s.push(exp[i]);
            continue;
        }
        else if(exp[i] == ')'){
            while(s.size()!=0&&s.top()!='('){
                
            }
        }
    }
}
int main()
{
    string exp;
    cout << "Enter the expression: ";
    cin >> exp;
    calculate(exp);
}