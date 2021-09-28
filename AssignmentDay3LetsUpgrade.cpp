#include<iostream>
using namespace std;

//assignment : Delete the last node of a linked list.

struct Node{
    int data;
    Node* next;
};

Node* create(int x);
Node* insert_end(Node *head, int x);
// Node* insert_beg(Node *head, int x);
void display(Node *head);

void deleteAthead(Node* &head){
    Node *todelete=head;
    head=head->next;

    delete todelete;
}
//solution of the assignment.
void deletion(Node* head, int x){
    Node *temp=head;
    while(temp->next->data != x){
        temp=temp->next;
    }
    Node *todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}

int main(){
    Node *head=NULL;
    head=insert_end(head, 10);
    head=insert_end(head, 20);
    head=insert_end(head, 30);
    head=insert_end(head, 40);
    deletion(head, 20);
//     deleteAthead(head);
    display(head);
    // head=insert_beg(head, 12);
    return 0;
}

Node* create(int x){
    Node *nptr = new Node;
    nptr->next=NULL;
    nptr->data=x; 

    return nptr;                        //address of the new node.
}

Node* insert_end(Node* head, int x){
    Node *np = create(x);
    if(!head){                          // if(head==NULL)
        head=np;
        return head;
    }
    Node *temp=head;
    while(temp->next){                  //  while(temp->next != NULL)
        temp=temp->next;
    }
    temp->next=np;
    
    return head;
}

void display(Node* head){
    if(!head){
        cout<<"List Empty";
        return;
    }
    while(head){                  
        cout<<head->data<<" ";
        head=head->next;                //local head (no effect on main head)
    }
}

// Node* insert_beg(Node *head, int x){
//     Node *nnp = create(x);
//     if(head==NULL){
//         head=nnp;
//         return head;
//     }
//     Node *t=head;
//     while(t->next){
//         t=t->next;
//     }
//     delete t;
//     return head;
// }
