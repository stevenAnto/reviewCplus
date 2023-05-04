#include <iostream>

class Node{
  public:
    int data;
    Node* next;
    Node(){data=0;
      next=NULL;}
    Node(int data){
      this->data=data;
      this->next=NULL;
    }
};
int main(){
  Node* newNode = new Node();
  //std::cout<<(*newNode).data;
 std::cout<<newNode->data;
 std::cout<<newNode.data;
}
