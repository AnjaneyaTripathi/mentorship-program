#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    int n, ele;
    stack<int> s1, s2;
    queue<int> q1,q2;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        q2.push(ele);
        q1.push(ele);
    }
    while (q1.empty() == false)
    {queue<int> q3;
        int top = q1.front();
        q1.pop();
        while (q2.empty() == false && q2.front() <= top)
        {
            q3.push(q2.front());
            q2.pop();
        }
        if (q2.empty() == true)
        {cout<<-1<<" ";
        }
        else cout<<q2.front()<<" ";
         q2=q1;
    
    }
    
}