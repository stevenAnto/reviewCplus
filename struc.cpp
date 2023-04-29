#include <iostream>
using namespace std;

struct Vector{
  int sz;
  double* element;
};
void vector_init(Vector& v,int s){
  v.element = new double[s];
  v.sz=s;
}
double read_and_sum(int s){
  Vector v;
  vector_init(v,s);
  for(int i=0;i!=s;++i)
    cin>>v.element[i];
  double sum=0;
  for(int i=0;i!=s;++i)
    sum += v.element[i];
  return sum;
}
int main(){
  Vector* v= new Vector();
  (*v).sz=4;
  cout<<(*v).sz<<endl;
  v->sz =5;
  cout<<(*v).sz<<endl;
}
