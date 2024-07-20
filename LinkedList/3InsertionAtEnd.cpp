//Insertion at tail to make it in correct order

#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    //constuctor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
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
    Node* tail = node1;

    print(head);

    cout << endl;
    insertAtTail(tail, 12);
    print(head);
    cout << endl;
    insertAtTail(tail, 15);
    print(head);
    cout << endl;

    return 0;
}