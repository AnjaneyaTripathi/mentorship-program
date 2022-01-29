void deleteAlt(struct Node *head){
    // Code here
    Node* temp = head;
    while(temp!=NULL && temp->next!=NULL)
    {
        Node* q = temp->next;
        temp->next = q->next;
        free(q);
        temp = temp->next;
    }
}

