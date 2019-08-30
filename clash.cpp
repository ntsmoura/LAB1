#include <iostream>
#include <queue>
using namespace std;
int main(){
  int n,rodadas,sub=0,aux,mortos=0,valor;
  queue<int>fila1;
  cin >> n;
  for(int i =0; i<n;i++){
    cin >> aux;
    fila1.push(aux);
  }
    cin >> rodadas;
  for(int j=0; j<rodadas;j++){
    cin >> aux;
    if(!fila1.empty()){
      valor = fila1.front();
      sub = valor - aux;
      fila1.pop();
      if(sub < 0){
        mortos++;
      }
      else{
        fila1.push(valor);
      }
    }
  }
  cout << mortos << endl;
}
