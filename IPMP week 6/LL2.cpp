#include <iostream>
using namespace std;
struct node
{
    int val;
    struct node*next;
    node(int x)
    {
        val = x;
        next = NULL;
    }
};
struct node* reverseList(struct node *head)
    {
        // code here
        // return head of reversed list
        struct node* current = head;
        struct node* forward;
        struct node* prev = NULL;
        while(current!=NULL)
        {
            forward = current->next;
            current->next = prev;
            prev = current;
            current = forward;
        }
        return prev;
    }


int main()
{
    node *head = NULL;
    int n,l;
    cin>>n;
    cin>>l;
    head = new node(l);
    node* p = head;
    for(int i = 1;i<n;i++)
    {
        int x;
        cin>>x;
        p->next = new node(x);
        p = p->next;
    }
    head = reverseList(head);
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
