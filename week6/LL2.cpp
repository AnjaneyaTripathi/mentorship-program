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

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void reverseList()
{
    node *temp = head;
    node *temp2 = head->next;
    node *temp3 = NULL;
    cout << head << endl;
    while (temp2 != NULL)
    {
        temp3 = temp2->next;
        temp2->next = temp;
        temp = temp2;
        temp2 = temp3;
    }
    head->next = NULL;
    head = temp;
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
    cout << "The list is as follows: ";
    displayList();
    reverseList();
    cout << "The reversed list is as follows: ";
    displayList();
}