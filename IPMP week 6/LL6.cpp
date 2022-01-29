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
bool detect_loop(node* head)
{
    map<node*,int> mp;
    node* temp = head;
    while(temp!=NULL && !mp[temp])
    {
        mp[temp] = 1;
        temp = temp->next;
    }
    if(temp!=NULL)
    {
        return true;
    }
    return false;
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
    if(detect_loop(head)){
        cout<<"yes there is a loop";
    } else{
        cout<<"No,there is no loop";
    }
    return 0;
}
