//Instertion at start

//First i have head node with pointer points to the NULL
//Now add new node at start

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    //constuctor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAthead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);

    //inster a new node
    insertAthead(head, 12);
    cout << endl;
    print(head);

    insertAthead(head, 15);
    cout << endl;
    print(head);
    return 0;
}