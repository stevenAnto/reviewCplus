#include "LinkedList.h"
using std::cout;
using std::endl;
int main(){
  LinkedList list;
  list.insertNode(1);
  list.insertNode(2);
  list.insertNode(3);
  list.insertNode(4);
  list.printList();
  cout<<endl;
  list.deleteNode(2);
  list.printList();

}
