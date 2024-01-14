#include <iostream>
using namespace std;

class Node{
public:
int data;
Node* next = nullptr; 
};

void printlist(Node* n){
    while(n != nullptr){
        cout << n ->data << endl;
        n = n ->next;
    }
}

void insertAtTheFront(Node** head, int newvalue){
    //1. prepare a newnode
    Node* newnode = new Node();
    newnode ->data = newvalue;
    //2. put it in front of current head
    newnode ->next = *head;
    //3. Move head of the list to point to the newNode
    *head = newnode;
    
}

void insertAtTheEnd(Node** head, int newvalue){
    //1. prepare a newnode
    Node* newnode = new Node();
    newnode ->data = newvalue;
    newnode ->next = nullptr;
    //2. if linked list is empty, new node will be a head node
    if(*head == nullptr){
        *head = newnode;
    }
    //3. Find the last node
    Node* last = *head;
    while(last ->next != nullptr){
        last = last ->next;
    }
    //4. insert newnode after last node (at the end)
    last ->next = newnode;
    }

void insertAtTheMiddle(Node* previous, int newvalue){
    //1. check if previous node is NULL
    if (previous == nullptr){
        cout << "Previous can not be NULL";
        return;
    }
    //2. Prepare a newNode
    Node* newnode = new Node();
    newnode ->data = newvalue;
    //3. insert newNode after previous
    newnode ->next = previous ->next;
    previous ->next = newnode;
}

void deletionOfNode(Node* &head, int position){
    //check if first node is empty or not
    if(head == nullptr){
        cout << "linked list is empty";
        return;
    }

    else if (position == 1){
    //case1. deletion of first node
    Node* current = head;
    head = head ->next;
    delete current;
    return;
    }

    //case2. deleting a node at a perticular position
    else{
        Node* previous = head;
        Node* current = nullptr;
        while(previous != nullptr && position != 1){
            // find current node 
            current = previous ->next;
            position--;
        }
        //connect previous node with after current node
            previous -> next = current ->next;
            delete current;
    }
}

void deletionOfLastNode(Node* &head){
    Node* current = head;
    Node* previous = nullptr;
    while(current ->next != nullptr){
        previous = current;
        current = current ->next;
        }
    previous ->next = nullptr;
    delete current;
}

void deleteOfKey(Node* &head, int key){

    if(head == nullptr){
        cout << "List is empty";
        return;
    }

    Node* current = head;
    Node* previous = nullptr;

    while(current != nullptr && current ->data != key){
        previous = current;
        current = current ->next;
    }
    if(current == nullptr){
        cout << "node with key " << key <<" not found" <<endl;
    }
    else{
    previous ->next = current ->next;
    delete current;
    }

}

int main(){
Node* head = new Node();
Node* second = new Node();
Node* third = new Node();
Node* fourth = new Node();

head ->data = 1;
head ->next = second;
second ->data = 2;
second ->next = third;
third ->data = 3;
third ->next = fourth;
fourth ->data = 4;
fourth ->next = nullptr;

//insertAtTheFront(&head, 0);
//insertAtTheFront(&head, -1);
//insertAtTheEnd(&head, 4);
//insertAtTheEnd(&head, 5);
//insertAtTheMiddle(head, -6);
//insertAtTheMiddle(second, -7);
//deletionOfNode(head,3);
//deletionOfLastNode(head);
//deleteOfKey(head,2);
printlist(head);
}