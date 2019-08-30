#include <iostream>
#include <queue>
using namespace std;
int main(){
  int n,tempo,vl,valor=0;
  queue<int>fila;
  cin >> n >> tempo;
  for(int i=0; i<n;i++){
    cin >> vl;
    fila.push(vl);
  }
  for(int j=0; j<tempo;j++){
    if(!fila.empty()){
      valor = fila.front()-1;
      fila.pop();
      if(valor>0)
      fila.push(valor);
    }
    else break;
  }
  if(fila.empty()) cout << "pronto";
  else {
    cout << fila.size() <<endl;
    while(!fila.empty()){
      cout << fila.front() << " ";
      fila.pop();
    }
  }
}
