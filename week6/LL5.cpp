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
void deleteList()
{
    node *temp = head;
    node *deleteNode = new node;
    deleteNode = head;
    while (temp != NULL)
    {
        node *deleteNode = new node;
        deleteNode = temp;

        temp = temp->next;
        if (deleteNode != head)
            delete (deleteNode);
        else
            head = NULL;
    }
    cout << "List deleted!!" << endl;
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
    deleteList();
    displayList();
}