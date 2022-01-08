//write a programme to check if there is a loop in sll
#include<stdlib.h>
#include<iostream>
using namespace std;

struct node{
    int data,flag=0;
    node* next;
}*head;


void displayList(int count){
int i=1;
node *ptr=(node*)malloc(sizeof(node));
ptr=head;
if(head==NULL){
    cout<<"No contents to display!!";
}
else{
cout<<"The contents of the nodes with their addresses and the address of next node are:\n";
do{
    cout<<i++<<". "<<ptr->data<<"  "<<ptr<<"  "<<ptr->next<<endl;
    
    ptr=ptr->next;
} while(ptr!=NULL&&ptr!=head);
ptr=NULL;
free(ptr);
cout<<endl<<"The number of nodes are: "<<count<<endl;
}
}

int inputList(){
int n;
cout<<"Enter the number of elements in the list: ";
cin>>n;
if(n<2){
    cout<<"Enter a positive number greater than 1"<<endl;
    return inputList();
}
head=(node*)malloc(sizeof(node));
cout<<"Enter the data: ";
cin>>head->data;
node *temp=(node*)malloc(sizeof(node));
temp=head;
for(int i=1;i<n;i++){
    node *ptr=(node*)malloc(sizeof(node));
   cout<<"Enter the data: ";
   cin>>ptr->data;
   temp->next=ptr;
   ptr->next=NULL;
   temp=ptr;
}
temp=NULL;
free(temp);
return n;
}

int checkList(int count){
    node *ptr=(node*)malloc(sizeof(node));
    ptr=head;
    while(ptr!=NULL){
       if(ptr->flag==1){
           cout<<"The single linked list has a loop"<<endl;
           return 0;
       }
        ptr->flag=1;
        ptr=ptr->next;
    }
    if(ptr==NULL){
        cout<<"There is no loop in the linked list"<<endl;
    }
    else if(ptr->next==head){
        cout<<"It is a complete circular list, thus there is a loop"<<endl;
    }
    cout<<endl<<endl;
    return 0;
}

void makeCLL(int count){
    node *ptr=(node*)malloc(sizeof(node));
    ptr=head;
    do{
    ptr=ptr->next;
    }while(ptr->next!=NULL);
ptr->next=head;
}


int main(){
    int count=inputList();
displayList(count);
checkList(count);
makeCLL(count);
displayList(count);
checkList(count);
}

