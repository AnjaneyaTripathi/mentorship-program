#include <iostream>
#include <stack>
using namespace std;
void input(stack<int> &s1)
{
    cout << "Enter the number of elements you want to push in queue: ";
    int n = 0;
    cin >> n;
    cout << "Enter the element you want to push: " << endl;
    int ele;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        s1.push(ele);
    }
}

void push(stack<int> &s)
{
    cout << "Enter the data you want to push: " << endl;
    int data;
    cin >> data;
    s.push(data);
    cout << data << " has been pushed: " << endl;
}

void pop(stack<int> &s1, stack<int> &s2)
{
    if (s1.size() == 0)
    {
        cout << "Queue Empty!" << endl;
        return;
    }
    while (s1.empty() == 0)
    {
        s2.push(s1.top());
        s1.pop();
    }
    int top = s2.top();
    s2.pop();
    cout << top << " has been popped!" << endl;
    while (s2.empty() == 0)
    {
        s1.push(s2.top());
        s2.pop();
    }
}
void top(stack<int> &s1, stack<int> &s2)
{
    if (s1.size() == 0)
    {
        cout << "Queue Empty!" << endl;
        return;
    }
    while (s1.empty() == 0)
    {
        s2.push(s1.top());
        s1.pop();
    }
    int top = s2.top();

    cout << top << " is the top element of the queue!" << endl;
    while (s2.empty() == 0)
    {
        s1.push(s2.top());
        s2.pop();
    }
}

int main()
{
    int n;
    stack<int> s1, s2;
    input(s1);
    int choice, data;
    while (1)
    {
        cout << "Enter the choice." << endl
             << "1.Push an element" << endl
             << "2.Pop the element" << endl
             << "3.Get the topmost element" << endl
             << "4.Exit" << endl;

        cin >> choice;
        switch (choice)
        {
        case 1:
            push(s1);
            break;
        case 2:
            pop(s1, s2);
            break;
        case 3:
            top(s1, s2);

            break;
        case 4:
            exit(0);
        default:
            cout << "Enter a correct choice" << endl;
            break;
        }
    }
}