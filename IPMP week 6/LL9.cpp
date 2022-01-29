int intersectPoint(Node* head1, Node* head2)
{
    map<Node*,int> mp;
    while(head1!=NULL)
    {
        mp[head1]=1;
        head1 = head1->next;
    }
    while(head2!=NULL)
    {
        if(mp.find(head2)!=mp.end())
        {
            break;
        }else{
            head2 = head2->next;
        }
    }
    return head2->data;
}

