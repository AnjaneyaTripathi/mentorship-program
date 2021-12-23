#include <iostream>
#include <queue>
using namespace std;
void input(queue<int> &q1)
{
    cout << "Enter the number of elements you want to push in stack: ";
    int n = 0;
    cin >> n;
    cout << "Enter the element you want to push: " << endl;
    int ele;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        q1.push(ele);
    }
}
void push(queue<int> &q)
{
    cout << "Enter the data you want to push: " << endl;
    int data;
    cin >> data;
    q.push(data);
    cout << data << " has been pushed: " << endl;
}
void pop(queue<int> &q1, queue<int> &q2)
{
    if (q1.size() == 0)
    {
        cout << "Stack Empty!" << endl;
        return;
    }
    while (q1.size() != 1)
    {
        q2.push(q1.front());
        q1.pop();
    }
    int front = q1.front();
    q1.pop();
    cout << front << " has been popped!" << endl;
    queue<int> q = q1;
    q1 = q2;
    q2 = q;
}

void top(queue<int> &q1, queue<int> &q2)
{
    if (q1.size() == 0)
    {
        cout << "Stack Empty!" << endl;
        return;
    }
    while (q1.size() != 1)
    {
        q2.push(q1.front());
        q1.pop();
    }
    int front = q1.front();
    q1.pop();
    cout << front << " is the top element of the stack!" << endl;
    q2.push(front);
    queue<int> q = q1;
    q1 = q2;
    q2 = q;
}
void size(queue<int> &q1)
{
    cout << "The size of the stack is " << q1.size() << endl;
}
int main()
{
    queue<int> q1;
    queue<int> q2;
    input(q1);
    int choice, data;
    while (1)
    {
        cout << "Enter the choice." << endl
             << "1.Push an element" << endl
             << "2.Pop the element" << endl
             << "3.Get the topmost element" << endl
             << "4.Get the size of the stack" << endl
             << "5.Display all the elements of the stack" << endl
             << "6.Exit" << endl;

        cin >> choice;
        switch (choice)
        {
        case 1:
            push(q1);
            break;
        case 2:
            pop(q1, q2);
            break;
        case 3:
            top(q1, q2);
            break;
        case 4:
            size(q1);
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Enter a correct choice" << endl;
            break;
        }
    }
}