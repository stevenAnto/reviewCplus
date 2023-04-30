#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string desComprimir(string comprimido){
  cout<<"entra "<<comprimido<<endl;
  string resultado="";
  int times=0;

  for(int i=0;i<comprimido.size();){
    cout<<"entro for1"<<endl;
    if(isdigit(comprimido[i])){
      cout<<"entro for1if"<<endl;
      string s(1,comprimido[i]);
      times=stoi(s);
      i++;
    }else{
      cout<<"entro for1Else"<<endl;
      string repetir="";
      if(comprimido[i]=='['){
        i++;
        cout<<"entro for1ElseIf"<<endl;
        while(comprimido[i]!=']'){
          cout<<"entro for1ElseWhile"<<endl;
          repetir =repetir+comprimido[i];
          i++;
        }
        for(int j=0;j<times;j++){
          cout<<"entro for1ElseFor"<<endl;
          resultado=resultado+repetir;
        }
        i++;
        times=0;
        cout<<"resultadoParcuia"<<resultado<<endl;
        cout<<"indice"<<i<<endl;
      }else{
        cout<<"entro Else"<<endl;
        repetir=comprimido[i];
        resultado=resultado+repetir;
        i++;
      }
    }
  }
  return resultado;
}
int main(){
  //input
  string str ="3[abc]4[ab]c";
  //output "abcabcababc"
  string test="abacabacababc";
  cout<<desComprimir(str)<<endl;
}
