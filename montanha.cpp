#include <iostream>
#include <queue>
using namespace std;
struct pessoa{
  int id,dinheiro;
};
int main(){
  int n,tempo,custo;
  queue<pessoa>fila;
  pessoa p;
  cin >> n >> tempo >> custo;
  for(int i=0; i<n;i++){
    cin >> p.id >> p.dinheiro;
    if(p.dinheiro>=custo)
    fila.push(p);
  }
  for(int i=0;i<tempo;i++){
    if(!fila.empty()){
      pessoa k = fila.front();
      k.dinheiro -=custo;
      fila.pop();
      if(k.dinheiro>=custo)
        fila.push(k);
    }
  }
  if(fila.empty()) cout<< "SEM FILA" << endl;
  else{
  while(!fila.empty()){
    cout << fila.front().id << " " << fila.front().dinheiro << endl;
    fila.pop();
  }}
}
