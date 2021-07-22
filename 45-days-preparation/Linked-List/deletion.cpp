// Delection in linked list

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

void deleteAtHead(node* &head){
    node* todelete=head;

    // Here we are chaning the head from n to n+1, and deleting the n
    head=head->next;

    delete todelete;
}

void deletion(node* &head, int val){

    // We have to check whether our linked list is empty or not, if it is empty then we will simply return nothing.
    if(head == NULL){
        return;
    }

    // If there is only one element in the linked list
    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }

    node* temp=head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* todelete = temp->next;

    // Linking the n-1 node to n+1, when we have to delete nth node.
    temp->next=temp->next->next;

    delete todelete;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
		node* head=NULL;
        insertAtHead(head, 1);
        insertAtHead(head, 2);
        insertAtHead(head, 3);

        // Display head
        display(head);

        // Deletion 
        deletion(head, 3);
        display(head);

    return 0;

}