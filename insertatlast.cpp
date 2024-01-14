#include <iostream>
using namespace std;

struct node{
int data;
node* next = nullptr;
};

void insertnode(node** head, int new_value){
    node* new_node = new node();
    new_node ->data = new_value;
    new_node ->next = nullptr;

    if(*head == nullptr){
        *head = new_node;
    }

    else{
            node* lastnode = *head;
        while(lastnode ->next != nullptr){
            lastnode = lastnode ->next;
        }
    
        lastnode ->next = new_node;
}
}
void printlist(node* n){
    while(n != nullptr){
        cout << n ->data << endl;
        n = n ->next;
    }
}



int main(){
    node* head = nullptr;
    insertnode(&head,1);
    insertnode(&head,2);
    insertnode(&head,3);
    insertnode(&head,4);
    insertnode(&head,5);

    printlist(head);

}