#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        int len = 0;
        Node* temp = head;
        while(temp!=NULL)
        {
            len++;
            temp = temp->next;
        }
        temp = head;
        for(int i = 1;i<=len/2;i++)
        {
            temp = temp->next;
        }
        return temp->data;
    }
};

