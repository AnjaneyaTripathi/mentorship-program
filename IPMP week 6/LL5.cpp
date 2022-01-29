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
void delete_list(node* head)
{
    node* current = head;
    node* fow = NULL;
    while(current!=NULL)
    {
        fow = current->next;
        free(current);
        current = fow;
    }
    head = current;
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
    delete_list(head);
    return 0;
}

