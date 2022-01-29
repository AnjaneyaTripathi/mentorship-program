Node* findIntersection(Node* head1, Node* head2)
{
    Node * head;
    Node * p = head;
    int i = 1;
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data==head2->data)
        {
            if(i==1)
            {
                head = new Node(head1->data);
                p = head;
                i++;
            }else{
                p->next = new Node(head1->data);
                p = p->next;
            }
            head1 = head1->next;
            head2 = head2->next;
        }else
        if(head1->data<head2->data){
            head1 = head1->next;
        }else{
            head2 = head2->next;
        }
    }
    return head;
}
