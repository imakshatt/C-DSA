//Inster at nth position

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insterAtStart(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, int position, int d){

    //Insert at first position if my position=1
    if(position == 1){
        insterAtStart(head, d);
        return;
    }

    
    Node* temp = head;
    int cnt = 1;

    //traverse throuth the position
    while(cnt < position-1){
        temp=temp->next;
        cnt++;
    }

    //create a node at that position
    Node* NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
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

    insertAtPosition(head, 3, 22);
    print(head);

    return 0;
}