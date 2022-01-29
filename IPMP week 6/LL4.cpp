#include <iostream>
#include <stack>
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
bool ispalindrome(node* head)
{
    node* pres = head;
    stack<int> s;
    while(pres!=NULL)
    {
        s.push(pres->val);
        pres = pres->next;
    }
    while(head!=NULL)
    {
        int x = s.top();
        s.pop();
        if(head->val!=x)
        {
            return false;
        }
        head = head->next;
    }
    return true;
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
    if(ispalindrome(head))
    {
        cout<<"true";
    }else{
        cout<<"false";
    }
}

