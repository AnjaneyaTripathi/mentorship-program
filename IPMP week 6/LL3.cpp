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
void print_reverse(struct node* p)
{
    if(p==NULL){
        return;
    }
    print_reverse(p->next);
    cout<<p->val<<" ";
}
int main()
{
    node *head = NULL;
    int n,k,l;
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
    print_reverse(head);
}
