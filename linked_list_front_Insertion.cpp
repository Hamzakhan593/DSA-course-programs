#include <iostream>
using namespace std;

struct node{
    int data;
    node *next = nullptr;
};

void PrintList(node *head){
    while(head!= nullptr){
        cout << head ->data << endl;
        head = head -> next;
    }
}

//If you only use Node* head (without the reference), any changes made to head inside the function would
// only affect the local copy of the pointer and would not be reflected outside the function.
void push(node* &head , int newdata){
    // Create a new node
    node *newNode = new node();
    //initialize data of node with newdata
    newNode -> data = newdata;
    // Set the next of the new node to the current head
    newNode -> next = head;
    // Update the head to the new node
    head = newNode;
}

int main(){
node *head = nullptr;
push(head , 5);
push(head, 6);
push(head, 7);
PrintList(head);

}
