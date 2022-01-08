#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
} * head;
node *createNode()
{
    node *newNode = new node;
    newNode->next = NULL;
    return newNode;
}
void createList(int n)
{
    cout << "Enter the data of the node: ";
    cin >> head->data;
    node *temp = head;
    for (int i = 1; i < n; i++)
    {
        node *newNode = createNode();
        cout << "Enter the data of the node: ";
        cin >> newNode->data;
        temp->next = newNode;
        temp = newNode;
    }
}
void displayList()
{
    node *temp = head;
    if (temp == NULL)
    {
        cout << "List is empty!!" << endl;
        return;
    }
    cout << "The list is as follows: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void findNode(int n)
{
    node *temp = head;
    while (temp != NULL && n > 1)
    {
        temp = temp->next;
        --n;
    }
    cout << "The node is " << temp->data << endl;
}
int main()
{
    head = createNode();
    cout << "Enter the size of the list: ";
    int n;
    cin >> n;
    if (n < 1)
    {
        cout << "Invalid size: Enter a number greater than equal to 1" << endl
             << "Enter the size of the list: ";
        cin >> n;
    }
    createList(n);
    displayList();
    cout << "Enter the index from last position which node you want to extract: ";
    int n1;
    cin >> n1;
    if (n1 > n)
    {
        cout << "Index exceeds the list size!!" << endl;
        return 0;
    }
    int n2 = n + 1 - n1;
    findNode(n2);
}