#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};
void printList(node *n){
    while(n!=NULL){
        cout << n ->data << endl;
        n = n ->next;
    }
}
int main(){
 //head is a pointer variable which store node type of variable of data
// new is a key word make a variable of node type now node type of blocked becomes in memory
// which address will be stored in head variable
node *head = new node();
node *second = new node();
node *third = new node();

//inserting data
head->data = 11;
head->next=second;

second ->data = 5;
second ->next = third;

third ->data = 20;
third ->next = NULL;

//inserting at starting
node *e = new node();
e ->data = 1;
e ->next = head;

//print
printList(e);


}