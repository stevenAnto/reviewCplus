#include "LinkedList.h"
using std::cout;
using std::endl;

LinkedList::LinkedList(){
  head=NULL;
}
void LinkedList::insertNode(int data){
  Node* newNode= new Node(data);
  if(head==NULL){
    head = newNode;
    return;
  }
  newNode->next=head;
  head =newNode;
}
void LinkedList::printList(){
  Node* temp =head;
  if(head==NULL){
    cout<<"List Empty"<<endl;
    return;
  }
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp =temp->next;
  }
}
void LinkedList::deleteNode(int nodeBorrar){
  //En vista que es una lista se un solo enlace, tenemos que usar dos variabels para el anterior
  Node* current= head;
  Node* previous=NULL;
  while(current!=NULL &&current->data!=nodeBorrar){
    previous=current;
    current=current->next;
  }
  if(current==NULL){
    cout<<"no se encontre"<<endl;
  }
  else{
    previous->next=current->next;
  }
  delete current;
}
