class Solution
{
    public:
    struct node *reverseAltK (struct node *head, int k)
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
        count = 0;
        node * p = previous;
        while(p->next!=NULL)
        {
            p = p->next;
        }
        while(forward!=NULL && count<k)
        {
            p->next = new node(forward->data);
            p = p->next;
            forward = forward->next;
            count++;
        }
        if(forward!=NULL)
        {
            p->next = reverseAltK(forward,k);
        }
        return previous;
    }
};
