#include <bits/stdc++.h>
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
void detect_and_remove_loop(node* head)
{
    if(head==NULL)
    {
        return;
    }
    node* slow = head;
    node* fast  = head;
    while(slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        {
            break;
        }
    }
    if(slow==fast)
    {
       node* temp = head;
       if(fast==temp)
       {
           while(fast->next!=temp)
           {
               fast = fast->next;
           }
       }else{
           while(temp->next!=fast->next)
           {
               temp = temp->next;
               fast = fast->next;
           }
       }
       fast->next = NULL;
    }
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
    p->next = head;
    detect_and_remove_loop(head);
    return 0;
}
