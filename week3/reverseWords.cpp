#include <iostream>
#include <string>
#include <queue>
#include <stack>
using namespace std;
stack<string> reverse(string s)
{
    stack<string> st;
    string aux;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            aux += s[i];

            continue;
        }
        else if (s[i] == ' ' || i == s.length() - 1)
        {
            st.push(aux);
            aux.clear();
        }
    }

    return st;
}

int main()
{

    string s;
    cout << "Enter the string:";
    getline(cin, s);
    stack<string> st;
    st = reverse(s);
    while (st.empty() == false)
    {
        cout << st.top() << " ";
        st.pop();
    }
}