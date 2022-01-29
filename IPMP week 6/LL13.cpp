class Solution
{
    public:
    //Function to rotate a linked list.
    int length(Node* head)
    {
        int x = 0;
        Node* temp = head;
        while(temp!=NULL)
        {
            x++;
            temp = temp->next;
        }
        return x;
    }
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node* temp = head;
        Node* prev = NULL;
        Node* p = prev;
        int l = length(head);
        k = k%l;
        for(int i = 1;i<=k;i++)
        {
            if(i==1)
            {
                prev = new Node(temp->data);
                p = prev;
            }else{
                p->next = new Node(temp->data);
                p = p->next;
            }
            temp = temp->next;
        }
        Node * head1 = temp;
        while(head1->next!=NULL)
        {
            head1 = head1->next;
        }
        head1->next = prev;
        return temp;
    }
};
