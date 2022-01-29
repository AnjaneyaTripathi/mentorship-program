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
int nth_from_end(node* head,int n)
{
    int l = 0;
    node* p = head;
    while(p!=NULL)
    {
        l++;
        p = p->next;
    }
    if(n>l)
    {
        return -1;
    }
    node* d = head;
    for(int i = 1;i<l-n+1;i++)
    {
        d = d->next;
    }
    return d->val;
}
int main()
{
    node *head = NULL;
    int n,k,l;
    cin>>n>>k;
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
    cout<<nth_from_end(head,k);
}
