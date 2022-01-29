node* Union(node* a,node*b)
{
    node* head = NULL;
    map<int,int> mp;
    mp[a->data]++;
    head = new node(a->data);
    node* p = head;
    a = a->next;
    while(a!=NULL)
    {
        mp[a->data]++;
        p->next = new node(a->data);
        p = p->next;
    }
    while(b!=NULL)
    {
        if(!mp[b->data])
        {
            p->next = new node(b->data);
            p = p->next;
        }
        b = b->next;
    }
    return head;
}
node* intersection(node*a,node*b)
{
    node* head = NULL;
    int i = 1;
    node* p = head;
    while(a!=NULL)
    {
        node* temp = b;
        while(temp!=NULL)
        {
            if(temp->data==a->data)
            {
                if(i==1)
                {
                    head = new node(temp->data);
                    p = head;
                    i++;
                }else{
                    p->next = new node(temp->data);
                    p = p->next;
                }
            }
            temp = temp->next;
        }
    }
    return head;
}
