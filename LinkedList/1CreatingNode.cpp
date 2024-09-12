//what?
//Linked list is the collection of node, is a linear data structure
//Node is like encapsulation wrapping data methods and functions in one entity
//So node contains Data and address of next node

//why?
//if i have to change the value of array runtime then that is not possible
//Vector is the way to do that but which is alos not optimal, here wastage of memory due to copy elements
//so we use linked list  
//linked list is the dynamic data structure so we can grow and shrink it runtime so no wastage of memory

//Let's create one Node, How node looks like

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor to create node
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insterAtHead(Node* &head, int d){
    //create a node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main(){
    //create a new node
    Node* node1 = new Node(10);

    // cout << node1->data << endl;
    // cout << node1->next << endl;

    //Head pointed to node1
    Node* head = node1;
    print(head);

    //Add a new node
    insterAtHead(head, 12);
    print(head);

    //Add one more Node
    insterAtHead(head, 15);
    print(head);
    return 0;
}
