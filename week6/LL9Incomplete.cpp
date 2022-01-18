#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *createNode()
{
    node *newNode = new node;
    newNode->next = NULL;
    return newNode;
}
void createList(node *head, int n)
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
void displayList(node *head)
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
node *calculateIntersection(node *head1, node *head2, int diff, int remain)
{
    node *temp1 = head1;
    for (int i = 0; i < diff; i++)
    {
        temp1 = temp1->next;
    }
    node *temp2 = head2;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1 == temp2)
        {
            return temp1;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return NULL;
}
int main()
{
    node *head1 = createNode();
    node *head2 = createNode();
    int n1, n2;
    cout << "Enter the number of elements in list 1: ";
    cin >> n1;
    cout << "Enter the elements of list 1:" << endl;
    createList(head1, n1);
    cout << "Enter the number of elements in list 2: ";
    cin >> n2;
    cout << "Enter the elements of the list 2" << endl;
    createList(head2, n2);
    int diff;
    if (n1 > n2)
    {
        diff = n1 - n2;
    }
    else
    {
        node *temp;
        diff = n2 - n1;
        temp = head1;
        head1 = head2;
        head2 = temp;
        n2 = n2 + n1;
        n1 = n2 - n1;
        n2 = n2 - n1;
    }
    // we are assuming that head1 has more number of elements!!!

    node *common = calculateIntersection(head1, head2, diff, n2);
    if (common == NULL)
    {
        cout << "No intersection found" << endl;
    }
    else
    {
        cout << "After Intersection ";
        displayList(common);
    }
}

// here answer will be no intersection because both the lists are always created separetely