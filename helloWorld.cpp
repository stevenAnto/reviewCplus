#include <iostream>
using namespace std;

double square(double x){
  return x*x;
}
void print_square(double x){
  cout<<"the square of"<<x<<"is"<<square(x)<<endl;
}
int main(){
  print_square(5);
}
