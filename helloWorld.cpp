#include <iostream>
using namespace std;

int* copy(){
  cout<<"entro"<<endl;
  int v1[10]={0,1,2,3,4,5,6,7,8,9};
  int *v2=new int[10];
  for(auto i=0;i!=10;i++){
    cout<<"entro for"<<endl;
    cout<<*(v2+i)<<endl;
    *(v2+i)=v1[i];
  }
  cout<<"salio"<<endl;
  return v2;
}
void print(int *vector,int n){
  for(auto i=0;i!=n+2;i++){
    cout<<vector[i]<<endl;
  }
}
int main(){
  int* vector = copy();
  print(vector,10);
}
