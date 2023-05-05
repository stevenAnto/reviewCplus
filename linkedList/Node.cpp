#include <iostream>
class Node{
  public:
    int data;
    Node* next;
    Node (){
      data=0;
      next=NULL;
    }
    Node(int data){
      this->data=data;
      this->next=NULL;
    }
};
/*int main(){
  Node node1{1};
  node1.data;
  //Node* node = new Node();//Solo cuando el tiempo de vida es largo 
}*/
