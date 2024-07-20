#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //DeConstuctor
    ~Node(){
        int value = this->data;

        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "Memory if free for Node with data: " << value << endl;
    }
};

void insertAtFirst(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtEnd(Node *tail, int d){
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, int position, int d){
    
    if(position == 1){
        insertAtFirst(head, d);
        return;
    }
    
    Node *temp = head;
    int cnt = 1;

    //traverse
    while(cnt < position-1){
        temp=temp->next;
        cnt++;
    }

    //create node
    Node *NodeToInsert = new Node(d);
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

void deleteNode(int position, Node* &head){
    if(position==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt <= position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
    }
}


int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout << endl;


}