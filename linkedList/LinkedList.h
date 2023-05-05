#ifndef LINKED_h
#define LINKED_h
#include "Node.cpp"

class LinkedList{
  public:
    LinkedList();
    void insertNode(int);
    void printList();
    void deleteNode(int);
  private:
    Node* head;
};
#endif
