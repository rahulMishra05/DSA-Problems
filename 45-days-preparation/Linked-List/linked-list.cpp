// Question => Implement a basic Linked List

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}

// The value of head is taken by reference not by value. This is becasue we are modifying our linked list 
void insertAtTail(node* &head, int val){

    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;

    // Traversing the linked list to reach the last element
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}


// Here we are calling head by value, not by reference becasue we are not modifying our linked list.
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head, int key){

    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main(){

    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);

    insertAtHead(head, 4);
    display(head);

    cout<<search(head, 5)<<endl;
    

    return 0;
}