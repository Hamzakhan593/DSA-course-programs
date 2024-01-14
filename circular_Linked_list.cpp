#include <iostream>
using namespace std;

struct node{
int data;
node* next = nullptr;
};

void printlist(node* head){
    node* ptr = head;
    do{
        cout << ptr ->data <<endl;
        ptr = ptr ->next;
    }
    while(ptr != head);
    }
int main(){

node* head = new node();
node* second = new node();
node* third = new node();
node* tail = new node();

head ->data = 1;
head ->next = second;
second ->data = 2;
second ->next = third;
third ->data = 3;
third ->next = tail;
tail ->data = 4;
tail ->next = head;
printlist(head);

}