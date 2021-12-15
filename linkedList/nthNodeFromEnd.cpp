#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int nodeToStart(int data, Node** head){
    Node* new_node = new Node();
    new_node->data = data;
    if(*head == NULL){
        *head = new_node;
        new_node->next = NULL;
        return 0;
    }
    new_node->next = *head;
    *head = new_node;
    return 0;
}

int nodeToEnd(int data, Node** head){
    Node* new_node = new Node();
    Node* last = *head;
    new_node->data = data;
    new_node->next = NULL;
    if(*head == NULL){
        *head = new_node;
        return 0;
    }

    while(last->next!=NULL){
        last = last->next;
    }

    last->next = new_node;
    return 0;
}

int printLL(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    return 0;
}

int nthFromEnd(int x, Node* head){
    Node* nBehind = new Node();
    nBehind = head;
    for(int i=0; i<x; i++){
        head = head->next;
    }
    while(head!=NULL){
        head = head->next;
        nBehind = nBehind->next;
    }

    return nBehind->data;

}

int main(){
    Node* head = NULL;
    nodeToEnd(1, &head);
    nodeToEnd(2, &head);
    nodeToEnd(4, &head);
    nodeToEnd(3, &head);
    nodeToStart(5, &head);
    printLL(head);
    int i;
    cout<<endl<<"Enter which element you want from the end: ";
    cin>>i;
    cout<<nthFromEnd(i, head);
    return 0;
}
