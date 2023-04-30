#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string recorr(string a){
  string n="hi";
  cout<<"tanamnio"<<a.size();
  for(int i=0;i<a.size();i++){
    n=n+a[i];
  }
  return n;
}
int main(){
  char a='4';
  cout<<""<<stoi(a)<<endl;
}
