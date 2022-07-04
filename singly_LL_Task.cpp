#include <iostream>
using namespace std;

struct Node {
   int data;
   struct Node *next;
};

struct Node* head = NULL;

void insert_thread1(int new_data) {
   
   Node *new_node;
   new_node = new Node;
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}

void insert_thread2(int new_data) {
   
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
   insert_thread1(3);
   insert_thread1(1);
   insert_thread1(7);
   insert_thread1(2);
   insert_thread1(9);
   cout<<"The linked list is: ";
   display();
   return 0;
}
