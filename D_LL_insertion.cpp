#include <iostream>
using namespace std;

struct node{
    int data;
    node* prev = nullptr;
    node* next = nullptr;
};

void insertionAtFront(node** head, int new_value){
    node* new_node = new node();
    new_node ->data = new_value;

    if(*head == nullptr){
        (*head) = new_node;
        return;
    }
else{
    new_node ->next = *head;
    (*head) ->prev = new_node;
    *head = new_node;
    return;

}
}

void insertion_at_end(node** head, int new_data){
    node* new_node = new node();
    new_node ->data = new_data;

    if(*head == nullptr){
        (*head) = new_node;
        return;
    }
else{
    node* lastnode = *head;
    while(lastnode->next != nullptr){
        lastnode = lastnode ->next;
    }
    lastnode ->next = new_node;
    new_node ->prev = lastnode;
    return;
}
}

void insert_at_middle(node** head,int data, int key){
    node* new_node = new node();
    new_node ->data = data;

    node* intendednode = *head;

    while(intendednode->data != key){
        intendednode = intendednode->next;
    }

    new_node ->next = intendednode ->next;
    new_node ->prev = intendednode;

    if(intendednode->next != nullptr){
    // new_node->next->prev = new_node;
    intendednode->next->prev = new_node;
    }
    intendednode ->next = new_node;
}

int main(){
    node* head = nullptr;
    node* end = nullptr;
    insertion_at_end(&head,1);
    insertion_at_end(&head,2);
    insertion_at_end(&head,3);
    insertion_at_end(&head,4);
    insertion_at_end(&head,5);
    node* current = head;
    while(current != nullptr){
        end = current;
        cout << current ->data << " ";
        current = current -> next;
    }
    insert_at_middle(&head,10,3);
cout << endl;
    while(head != nullptr){
        cout << head ->data << " ";
        head = head -> next;
    }
// cout << endl;
//     while(end != nullptr){
//         cout << end ->data <<" ";
//         end = end ->prev;
//     }
}