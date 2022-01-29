class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    {
        // Complete this method
        if(head==NULL)
        {
            return NULL;
        }
        int count = 0;
        node*current = head;
        node* forward = NULL;
        node* previous = NULL;
        while(current!=NULL && count<k)
        {
            forward = current->next;
            current->next = previous;
            previous = current;
            current = forward;
            count++;
        }
        node * p = previous;
        while(p->next!=NULL)
        {
            p = p->next;
        }
        if(forward!=NULL)
        {
            p->next = reverse(forward,k);
        }
        return previous;
    }
};
