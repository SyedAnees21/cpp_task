#include <iostream>
using namespace std;

struct Node {
   int data;
   struct Node *next;
};

struct Node* head = NULL;

void push(int new_data) {
   
   Node *new_node;
   new_node = new Node;
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}


void display() {
   
   Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}

int main() {
   push(3);
   push(1);
   push(7);
   push(2);
   push(9);
   cout<<"The linked list is: ";
   display();
   return 0;
}
